#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* 
选项有:
1,查询所有学员信息
2,添加学员信息
3,插入学员信息
4,删除学员信息
5,修改学员信息(作业)
6,查找指定位置的学员(作业)
7,退出程序(释放内存
 */
typedef struct student
{
    char name[50];
    int age;
    struct student * next;
    
}Stu;
Stu *head = NULL;
void myscanf()
{

    struct student * arr=calloc(1,sizeof(struct student));
    scanf("%s%d",arr->name,arr->age);
}

struct student SELECTS(Stu *head)
{
    Stu *p=head;
    while (p!=NULL)
    {
        printf("姓名:%s年龄:%d",p->name,p->age);
        p=p->next;
    }
    printf("\n");
}

struct student ADDS(Stu *head,Stu *stu)
{

}

struct student ADD()
{

}

struct student DELETE()
{

}

struct student UPDATA()
{

}

struct student SELECT_WZ()
{

}

struct student MyMenu(int tag)
{
    switch (tag)
    {
    case 1:

        break;
    case 2:

       break;
    case 3:

       break;
    case 4:

       break;
    case 5:

       break;
    case 6:

       break;

    
    default:
        break;
    }
}
void free_link(Stu *head)
{
    Stu *pd = head;
    while (pd != NULL)
    {
        //记录其下一个节点
        Stu *next = pd->next;
        //释放当前节点
        free(pd);
        //更换当前节点
        pd = next;
    }
    
}
int main(int argc, char const *argv[])
{
    while (1)
    {
        printf("请输入要操作的选项\n");
        printf("选项有:\n1,查询所有学员信息\n2,添加学员信息\n3,插入学员信息\n4,删除学员信息\n5,修改学员信息\n6,查找指定位置的学员\n7,退出程序");
        int tag=0;
        if (tag=!7)
        {
            MyMenu(tag);
        }else
        {
            free_link(head);
            printf("欢迎下次光临\n");
            break;
        }
    }
    
    return 0;
}
