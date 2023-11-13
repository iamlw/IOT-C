#include <stdio.h>
#include <stdlib.h>
#include"stu.h"

int main(int argc, char const *argv[])
{
    FILE *f=fopen("a.txt","r");
    fseek(f,0,2);
    int a=ftell(f);
    fclose(f);
    printf("%d\n",a);


    return 0;
}
