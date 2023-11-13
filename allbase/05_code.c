#include <stdio.h>
#include <stdlib.h>
#include"stu.h"

void funw(){
    FILE *f=fopen("stuio","a");
    STU s1={"张三","男",68,1,NULL};
    STU s2={"李四","女",38,2,NULL};
    STU s3={"王五","女",88,3,NULL};
    STU s4={"老六","男",18,4,NULL};
    STU ss[4]={s1,s2,s3,s4};
    fwrite(ss,sizeof(STU),4,f);

    fclose(f);
    printf("写入成功\n");
}

void funr()
{
    FILE *f=fopen("stuio","r");
    while (1)
    {
        STU *stu=malloc(sizeof(STU));
        int count=fread(stu,sizeof(STU),1,f);
        if (count==0)
        {
            break;
        }
        printf("%s %s %d %d\n",stu->name,stu->sex,stu->age,stu->num);
    }
    fclose(f);
    
    

}
int main(int argc, char const *argv[])
{
    // funw();
    funr();
    return 0;
}
