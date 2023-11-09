#include <stdio.h>
void fun01()
{
    int num = 10;
    //const修饰的变量是为常量
    //这种指针称为指针常量
    //是一个常量
    int * const p = &num;

    int x = 1;
    //无法修改其指向的地址
    //p = &x;
    *p = 100;
    //但是可以修改指向的地址中的值
    printf("%d\n",*p);
    printf("%d\n",num);
}
void fun02()
{
    int num = 10;
    //int const * p = &num;
    //常量指针:指向常量的指针
    //是个指针
    const int * p = &num;
    //可以修改指针指向的地址
    int x = 1;
    p = &x;
    //但是不可以修改指向的地址中的值
    //*p = 100;
}

void fun03()
{
    int num = 10;
    //常量指针常量
    //指针常量与常量指针的结合体
    const int * const p = &num;
    //既不能修改其指向的地址
    int a = 1;
    //p = &a;
    //又不能修改其地址中的值
    //*p = 100;
}
int main(int argc, char const *argv[])
{
    fun01();
    return 0;
}