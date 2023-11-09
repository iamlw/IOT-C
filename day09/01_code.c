#include <stdio.h>
void fun01()
{
    int nums[] = {1,3,5,7,9,2,4,6,8,10};
    int *p = &nums[3];
    printf("*p=%d\n",*p);
    printf("*(p+1)=%d\n",*(p+1));
    printf("*(p+2)=%d\n",*(p+2));
    printf("*(p-1)=%d\n",*(p-1));
    printf("*(p-2)=%d\n",*(p-2));

    for (int i = 0; i < 10; i++)
    {
        printf("%p\n",&nums[i]);
    }    
}
void fun02()
{
    int nums[] = {1,3,5,7,9,2,4,6,8,10};
    int *p = &nums[0];
    for(int i= 0; i < 10; i++)
    {
        printf("nums[%d]=%d\n",i,*(p++));
    }
}
void fun03()
{
    int nums[] = {1,3,5,7,9,2,4,6,8,10};
    int *p1 = &nums[0];
    int *p2 = &nums[1];
    if (p1 < p2)
    {
        printf("p1在p2的前面\n");
    }
    else{
        printf("p1在p2的后面\n");
    }
}

void fun04()
{
    int nums[] = {1,3,5,7,9,2,4,6,8,10};
    //数组名就是数组中存储的第一个元素的地址
    printf("nums = %p\n",nums);
    printf("nums[0]= %p\n",&nums[0]);
}
void fun05()
{
    int nums[] = {1,3,5,7,9,2,4,6,8,10};
    int *p = nums;

    for (int i = 0; i < 10; i++)
    {
        // printf("nums[%d]=%d\n",i,*(p++));
        //printf("nums[%d]=%d\n",i,*(p+i));
        //printf("nums[%d]=%d\n",i,nums[i]);
        //printf("nums[%d]=%d\n",i,p[i]);
        //printf("nums[%d]=%d\n",i,*(nums+i));
        //c语言中的数组本质上是一个指针常量
        //其指向的地址不能修改
        //但是可以修改其地址中存储的值
        //printf("nums[%d]=%d\n",i,*(nums++));
    }
    
}

void fun06()
{
    //数组指针
    //概念:指向数组的指针,本质是一个指针
    int nums01[] = {1,3,5,7,9,2,4,6,8,10};
    int *p1 = nums01;

    int nums02[2][4] = {1,2,3,4,5,6,7,8};
    int (*p2)[4] = nums02;

    int nums03[2][3][4] = {0};
    int (*p3)[3][4] = nums03;
}
void fun07()
{
    int a = 1,b = 2, c = 3;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    //指针数组
    //存储指针的数组,本质是一个数组
    int *ps[3]={p1,p2,p3};
}

void fun08()
{
    //str01的内存地址在栈区
    //str01是一个数组,所以是一个指针常量
    //指针常量可以修改其地址中的值
    //指针常量不可以修改其指向的地址
    char str01[] = "hello";
    str01[0] = 'H';
    printf("str01=%s\n",str01);
    //str01 = "world";
    //str02的内存地址在文字常量区
    //常量指针
    //指针指向的地址可以修改
    //指针指向的地址中的元素不可修改
    char * str02 = "hello";
    printf("str02修改前的地址%p\n",str02);
    str02 = "world";
    printf("str02修改后的地址%p\n",str02);
    str02[0] = 'W';
}
void fun09()
{
    char str01[] = "hello";
    char *str03 = str01;
    printf("str03修改内容前%s\n",str03);
    str03[0] = 'H';
    printf("str03修改内容后%s\n",str03);

    str03 = "world";
    printf("str03修改地址后%s\n",str03);

}

void fun10()
{
    char names[][50] = {"boboy","tom","jerry","zhangsan","lisi"};
    //指针数组
    char *ns[50] = {"boboy","tom","jerry","zhangsan","lisi"};
    //数组指针
    // char (*nss)[50] = names;
    char (*nss)[50] = {"boboy","tom","jerry","zhangsan","lisi"};
}

int main(int argc, char const *argv[])
{
    fun10();
    return 0;
}