#include <unistd.h>
#include <stdlib.h>
#define MAX 40
int main()
{
    char buffer[MAX];
    int nread;

    nread = read(0, buffer, MAX);
    if (nread == -1)
        write(2, "A read error has occurred\n", 26);

    if ((write(1,buffer,nread)) != nread)
        write(2, "A write error has occurred\n", 27);

    exit(0);
}