#include <stdio.h>
#include <stdlib.h>
#include"stu.h"

int main(int argc, char const *argv[])
{
    FILE *f=fopen("stuio","r");

    STU * stu=calloc(1,sizeof(STU));
    fread(stu,sizeof(STU),1,f);
    printf("%s %s %d %d\n",stu->name,stu->sex,stu->age,stu->num);


    fclose(f);


    return 0;
}
