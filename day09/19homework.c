#include<stdio.h>
/* 设计函数int  toInt(char *str), 实现将字符串转成数值的功能。(困难)
【提示】如 toInt("123") 返回 123 */
int ToInt(char* str){
    int num = 0;
    while(*str!='\0'){
        num = num*10 + *str - '0';
        str++;
    }
    return num;
}
int main(int argc, char const *argv[])
{
    char a[]="123";
    int res=ToInt(a);
    printf("%d\n",res);
    return 0;
}
