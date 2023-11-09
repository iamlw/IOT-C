#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    if (a<1000&&a>99)
    {
        int g=a%10;
        int s=a%100/10;
        int b=a/100;

        if (a==g*g*g+s*s*s+b*b*b)
        {
            printf("%d\n",a);
        }
        
    }else{
        printf("输入的不是三位数\n");
    }
    
}
