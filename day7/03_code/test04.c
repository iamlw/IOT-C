#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    //随机数
/*     srand(time(NULL));
    int a=rand()%9000+1000;
    printf("%d\n",a); */

    //阶乘
/*     int a=1;
    for (int i = 1; i <= 10; i++)
    {
       a*=i;
    }
    printf("%d\n",a); */

    //9*9乘法表
/*     for (int i = 1; i <=9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d ",i,j,i*j);
        }
        
        printf("\n");
    } */
    
    //百文百鸡
/* 
    int count=0;
    for (int g = 0; g < 34; g++)
    {
        for (int m = 0; m < 51; m++)
        {
            int x=100-g-m;
            if (x%3==0&&g/3+m*2+x*1==100)
            {
                printf("公鸡有%d,母鸡有%d,小鸡有%d\n",g,m,x);
                count++;
            }
        }
        
    }
     printf("共有%d种买法\n",count); */

     //鸡兔同笼
     /* 该养殖户数出了腿的数量与头的数量
        腿60
        头20
        请您帮助养殖户计算鸡兔个几何 */
/*         int count =0;
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 15; j++)
            {
                if (i+j==20 && 2*i+4*j==60)
                {
                    printf("鸡有%d只,兔子有%d只\n",i,j);
                }
                
            }
            
        } */



    
    


    
    
    
}
