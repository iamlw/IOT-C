#ifndef MYSTU
#define MYSTU

typedef struct student
{
    char name[50];
    char sex[20];
    int age;
    int num;
    struct student *next;
}STU;

#endif