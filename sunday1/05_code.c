#include<stdio.h>
#include <stdlib.h>
#include <string.h>
    //定义一个函数,在函数中将传入的字符串拷贝一份,返回拷贝好的字符串

char *  my_strcopy(char * str,int len)
{
    char* newstr=(char *)calloc((len+1),sizeof(char));
    for (int i = 0; i < len+1; i++)
    {
        newstr[i]=str[i];
    }
    return newstr;
    
}
int main(int argc, char const *argv[])
{
    char* str1="reawaqa";
    int len=strlen(str1);
    char* str2=my_strcopy(str1,len);
    printf("原字符串为%s\n",str2);
    printf("新字符串为%s\n",str1);

    
    free(str2);
    return 0;
}
