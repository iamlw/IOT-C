#include <stdio.h>
#include"stu.h"

int main(int argc, char const *argv[])
{
    FILE *f=fopen("stuio","a");
    STU s1={"张三","男",18,1,NULL};

/*     char str[100];
    sprintf(str,"%s %s %d %d\n",s1.name,s1.sex,s1.age,s1.num);
    fputs(str,f); */
    fwrite(&s1,sizeof(STU),1,f);



    fclose(f);


    return 0;
}
