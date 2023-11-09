#include<stdio.h>
#include"myfun.h"
void add(int a,int b)
{
    printf("动态库sum=%d\n",a+b);
}
void mul(int a,int b)
{
    printf("动态库mul=%d\n",a*b);

}