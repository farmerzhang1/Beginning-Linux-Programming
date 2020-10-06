#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    char block[1024];
    int in, out;
    int nread;

    in = open("bigfile.in", O_RDONLY);
    out = open("bigfile.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR|S_IRGRP);
    /*
    S for 'status'
    I for 'inode'
    */
    while((nread = read(in,block,sizeof(block))) > 0)
        write(out,block,nread);
    mode_t mode;
    struct stat statbuf;
    stat("bigfile.out", &statbuf);
    mode = statbuf.st_mode;
    write(1, &mode, sizeof(mode));
    exit(0);
}