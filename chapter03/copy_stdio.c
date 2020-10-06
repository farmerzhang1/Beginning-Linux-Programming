#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *in, *out;

    in = fopen("bigfile.in","r");
    out = fopen("bigfile.out","w");

    while((c = fgetc(in)) != EOF)
        fputc(c,out);

    exit(0);
}