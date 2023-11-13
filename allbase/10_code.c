#include<stdio.h>
#include<string.h>
void getmemory(char *p)
{
	p=(char *)malloc(100);
	strcpy(p,"hello world");
}

int main()
{
	char *str=NULL;
	// getmemory(str);
    str=(char *)malloc(100);
	strcpy(str,"hello world");
	printf("%s\n",str);
	free(str);
	return 0;
}
