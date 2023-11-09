#include<stdio.h>
/* 
设计函数my_strcmp(char *str1, char  *str2)，返回两个字符串匹配的结果。
【提示】相同返回0，str1大于str2返回1，str2大于str1返回-1
 */
int my_strcmp(char *str1,char *str2)
{
	while(*str1==*str2)
	{
		if(*str1=='\0')
			return 0;
		else
		{
			str1++;
			str2++;
		}
	}
	if(*str1>*str2)
		return 1;
	else
		return -1;
}
int main()
{
	char *p="aee";
	char *q="caaaaa";
	int ret=my_strcmp(p,q);
	printf("%d\n",ret);
	return 0;
}
