#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
    char name[50];
    char sex[5];
    int age;
    int num;
    struct student *next;
}Stu;

int main(int argc, char const *argv[])
{
    Stu s1={"张三","男",18,1,NULL};
    Stu s2={"李四","女",28,2,NULL};
    Stu s3={"王五","男",58,3,NULL};
    Stu s4={"老六","女",88,4,NULL};

    Stu *head=&s1;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=&s4;

    Stu *pd=head;
    while (pd!=NULL)
    {
        printf("%s %s %d %d \n",pd->name,pd->sex,pd->age,pd->num);
        pd=pd->next;
    }
    

    
    return 0;
}
