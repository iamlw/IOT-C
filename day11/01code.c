#include<stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(int argc, char const *argv[])
{

    char s1[100];
    char s2[100];

    for (int i = 0; i < 3; i++)
    {
        printf("请输入账号:\n");
        scanf("%s",s1);
        printf("请输入密码:\n");
        scanf("%s",s2);
        if (strcmp(s1,"admin")==0 && strcmp(s2,"123456")==0)
        {
            printf("登陆成功\n");
            return 1;
        }
        else{
            if ((2-i)>0)
            {
                printf("登陆失败\n");
                printf("还有%d次机会,请重新输入\n",2-i);
            }
            
        }
    }printf("登陆失败\n");
    return 0;
    

    

    
    
    return 0;
}
