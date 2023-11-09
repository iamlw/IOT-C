#include<stdio.h>
#include <string.h>
    //定义一个函数,将整形的字符串,转换为int型的数,并返回转换后的数
int  strToInt(char * str)
{
    int res=0;
    int len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        res=res*10+str[i]-'0';
    }
    return res;
    
}
int main(int argc, char const *argv[])
{
    char *str1="1234";
    int str2=strToInt(str1);
    printf("%d\n",str2);
    return 0;
}
