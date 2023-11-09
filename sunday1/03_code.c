#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*     定义一个函数,在该函数中生成一个长度为20,类型为int的数组,数组中的元素随机在
    30~100 之间生成 */

int * createArr()
{
    int *p=(int*)calloc(20,sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        p[i]=rand()%71+30;
    }
return p;
}

int main(int argc, char const *argv[])
{
    int *arr=createArr();
    for (int i = 0; i < 20; i++)
    {
    printf("%d\n",arr[i]);
    }
    free(arr);
    
    
    return 0;
}
