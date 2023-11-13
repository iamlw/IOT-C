#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    FILE * p1=fopen("a.txt","r");
    FILE * p2=fopen("b.txt","w");
    char str[20];
    char *s=NULL;
    while ((s=fgets(str,6,p1))!=NULL)
    {
        fputs(s,p2);
    }
    

    

    fclose(p2);
    fclose(p1);
    return 0;
}
