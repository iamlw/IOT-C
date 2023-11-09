#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fun01()
{
    char s[]="123.,+456...-*789++";
    char *str=s;
    char *delim=".,+-*";
    char *p=strtok(str,delim);
    printf("%s\n",p);
    char *p1=strtok(NULL,delim);
    printf("%s\n",p1);
    char *p2=strtok(NULL,delim);
    printf("%s\n",p2);
    char *p3=strtok(NULL,delim);
    printf("%s\n",p3);
}
void fun02()
{
    char s[]="123.,+456...-*789++";
    char *str=s;
    char *delim=".,+-*";
    char *buf[3];
    int i=0;
    char *p=strtok(str,delim);
    while (1)
    {
        buf[i]=p;
        i++;
        p=strtok(NULL,delim);
        if (p==NULL)
        {
            break;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",buf[i]);
    }
    
}
int main(int argc, char const *argv[])
{
    fun02();
    return 0;
}
