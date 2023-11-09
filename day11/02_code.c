#include<stdio.h>
#include <string.h>
#include <stdlib.h>
    
void fun(){
    char str[100]="小明:21,.,.男.女,北京:haidian" ;
    char *d=":,.";

    char *buf[7] = {str ,NULL};
    int i=0;
    while((buf[i] = strtok(buf[i], d))!= NULL && (++i));
    printf("姓名:%s\n",buf[0]); 
    printf("年龄:%s\n",buf[1]);
    printf("性别:%s\n",buf[2]);
    printf("爱好:%s\n",buf[3]);
    printf("城市:%s\n" ,buf[4]);
    printf("地区:%s\n",buf[5]);
}
int main(int argc, char const *argv[])
{
    fun();
    return 0;
}
