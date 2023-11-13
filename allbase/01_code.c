#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    FILE * p1=fopen("a.txt","r");
    FILE * p2=fopen("b.txt","a");
    int c=0;
    while ((c=fgetc(p1))!=EOF)
    {
        fputc(c,p2);
    }


    fclose(p2);
    fclose(p1);
    return 0;
}
