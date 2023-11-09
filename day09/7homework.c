#include<stdio.h>
/* 设计函数my_strlen(char *str)，返回str字符串的长度 */
int my_strlen(char* str)
{
	int count = 1;
	if (*str != '\0')
		return count + my_strlen(str+1);
	else
		return 0;
}
int main(int argc, char const *argv[])
{
    char s[]="hello";
    int res=my_strlen(s);
    printf("%d\n",res);

    return 0;
}
