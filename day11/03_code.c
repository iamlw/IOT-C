

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
void fun03()
{
    char s[]="+CMGR:REC UNREAD,+8613466630259,98/10/01,18:22:11+00,ABCdefGHI";
    char *str=s;
    char *delim=",";
    char *buf[5];
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
    buf[1]=buf[1]+3;
    
    char *delim2="+";
    buf[3]=strtok(buf[3], delim2);


        printf("手机号:%s\n",buf[1]);
        printf("日期:%s\n",buf[2]);
        printf("时间:%s\n",buf[3]);
        printf("内容:%s\n",buf[4]);

    
}
void fun04()
{
    char s[]="$GPRMC,024813,640,A,3158,4608,N,11848,3737,E,10,05,324,27,150706,A*50";
    char *str=s;
    char *delim=",";
    char *buf[16];
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
for (int i = 0; i < 16; i++)
{
    printf("%s\n",buf[i]);
}


    
}
void fun05()
{


    char s[]="+CMGR:REC UNREAD,+8613466630259,98/10/01,18:22:11+00,ABCdefGHI";
    char *str=s;
    char *delim=",";
    char *buf[5];
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
    buf[1]=buf[1]+3;

    char *delim2="+";
    buf[3]=strtok(buf[3], delim2);


        printf("手机号:%s\n",buf[1]);
        printf("日期:%s\n",buf[2]);
        printf("时间:%s\n",buf[3]);
        printf("内容:%s\n",buf[4]);





    
}
int main(int argc, char const *argv[])
{
    fun05();
    return 0;
}
