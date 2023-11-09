#include<stdio.h>

    //定义一个函数,在该函数中计算100以内的偶数和,并返回其结果

int sum()
{

    int sum=0;
    for (int i = 0; i <= 100; i++)
    {
        if(i%2==0){
            sum+=i;
        }
    }
    
    return sum;
    
}
int main(int argc, char const *argv[])
{
    int a=sum();
    printf("%d\n",a);
    return 0;
}
