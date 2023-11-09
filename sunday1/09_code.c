#include<stdio.h>
#include<string.h>
    //设置一个函数,查询字符在字符串1中出现的次数,如果没有出现返回-1
int count(char *str,char s)
{
    int len=strlen(str);
    int sum=0;
    for (int i = 0; i < len; i++)
    {
        if (str[i]==s)
        {
            sum++;
        }
        
    }
    return sum;
    
}
int main(int argc, char const *argv[])
{
    char* str="abcdaacd";
    char s='a';
    int res=count(str,s);
    printf("%d\n",res);
    return 0;
}
