#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
int main()
{
    if ((write(1, "Here is some data\n", 19)) != 19) {
        write(2, "A write error has occurred on file descriptor 1\n", 46);
        write(1, "how can I write parameter?", 27);
    }
    exit(0);
}