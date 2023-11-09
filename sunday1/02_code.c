#include<stdio.h>
    //定义一个函数,在该函数中计算传入的数组中数据的和,并返回结果
double mysum(double * arr,int len)
{
    double a=0;
    for (int i = 0; i < len; i++)
    {
        a=a+arr[i];
    }
    return a;
    
}
int main(int argc, char const *argv[])
{
    double nums[5]={2,5,3,4,6};
    int len=5;
    printf("%.lf\n",mysum(nums,len));
    return 0;
}
