#include<stdio.h>
#include <string.h>
#include <stdlib.h>

    //设计函数，接收一个字符串，返回这个字符串的逆向内容。
char * rev(char * str)
{
    int len=strlen(str);
    char * revstr=(char *)calloc(len,sizeof(char));
    for (int i = 0; i < len; i++)
    {
        revstr[i]=str[len-i-1];
    }
    return revstr;


}
int main(int argc, char const *argv[])
{
    char * str1="erqwaqaqar";
    char *str2=rev(str1);
    printf("%s\n",str2);
    free(str2);
    return 0;
}
