#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//节点
typedef struct stu
{
    //数据域
    char name[30];
    char sex[10];
    int num;
    //...
    //指针域
    struct stu *next;
}STU;
//记录链表的首节点
STU *head = NULL;
void print_link(STU *head)
{
    //定义一个节点,作为当前节点
    STU *pd = head;
    while(pd != NULL)
    {
        printf("姓名:%s\t性别:%s\t学号:%d\n",pd->name,pd->sex,pd->num);
        //获取下一个节点,赋值给当前节点的变量
        pd = pd->next;
    }
    printf("\n");
}
/*
    添加新节点到连接尾部
    参数;
        head:链表的头节点
        stu:要添加的新节点
    返回值
        链表的头节点
*/
STU *add(STU *head,STU *stu)
{
    if (stu == NULL)
    {
        return head;
    }
    
    //判断链表的首节点是否为NULL
    if (head == NULL)
    {
        head = stu;
        printf("添加成功\n\n");
        return head;
    }
    
    //查询最后一个节点
    STU *lastNode = head;
    while(lastNode != NULL)
    {
        if (lastNode->next == NULL)
        {
            break;
        }
        else
        {
            lastNode = lastNode->next;
        }
    }
    //当循环结束后lastNode就是当前链表的最后一个节点
    //此时将本次创建的节点,添加到原链表最后一个节点的后面
    lastNode->next = stu;
    printf("添加成功\n\n");
    return head;
}
STU *add_stu(STU *head)
{
    STU *stu = calloc(1,sizeof(STU));
    printf("请输入学员名称:\n");
    scanf("%s",stu->name);
    printf("请输入学员性别:\n");
    scanf("%s",stu->sex);
    printf("请输入学号:\n");
    scanf("%d",&stu->num);
    head = add(head,stu);
    return head;
}

int get_len(STU *head)
{
    int i = 0;
    STU *pd = head;
    while(pd != NULL)
    {
        i++;
        pd = pd->next;
    }
    return i;
}

STU *insert_stu(STU *head)
{
    STU *stu = calloc(1,sizeof(STU));
    printf("请输入要插入的学员名称:\n");
    scanf("%s",stu->name);
    printf("请输入要插入的学员性别:\n");
    scanf("%s",stu->sex);
    printf("请输入要插入的学员学号:\n");
    scanf("%d",&stu->num);

    printf("请输入要插入位置(从0开始):\n");
    int index = 0;
    scanf("%d",&index);
    //排除错误
    int len =get_len(head);
    if (index >= len)
    {
        //插入位置超过链表长度,放到链表末尾
        head = add(head,stu);
        return head;
    }
    
    if (index < 0)
    {
        printf("输入的位置有误\n");
        return head;
    }
    if (index == 0)
    {
        stu->next = head;//将原连接的首节点作为新节点的下一个节点
        head = stu;//此时新节点就是链表的首节点
        printf("添加成功\n\n");
        return head;
    }
    
    //寻找插入的位置的前一个节点
    STU *pd = head;
    for(int i = 0; i < index - 1; i++)
    {
        pd = pd->next;
    }
    stu->next = pd->next;//将前一个节点的原后一个节点赋值新节点的下一个节点
    pd->next = stu;//将前一个节点的后一个节点改为新节点
    printf("添加成功\n\n");
    return head;
}

STU *del_stu(STU *head)
{
    
    printf("请输入要删除位置(从0开始):\n");
    int index = 0;
    scanf("%d",&index);
    //排除错误
    int len =get_len(head);
    if (index >= len||index < 0)
    {
        printf("输入的位置有误\n");
        return head;
    }

    STU *pd = head;
    for(int i = 0; i < index - 1; i++)
    {
        pd = pd->next;
    }
    pd->next=pd->next->next;  
    printf("删除成功\n\n");
    return head;
}

STU *upd_stu(STU *head)
{
    
    printf("请输入要修改位置(从0开始):\n");
    int index = 0;
    scanf("%d",&index);
    int len =get_len(head);
    if (index >= len||index < 0)
    {
        printf("输入的位置有误\n");
        return head;
    }


    STU *pd = head;
    for(int i = 0; i < index; i++)
    {
        pd = pd->next;
    }
    printf("请输入要修改的学员名称:\n");
    scanf("%s",pd->name);
    printf("请输入要修改的学员性别:\n");
    scanf("%s",pd->sex);
    printf("请输入要修改的学员学号:\n");
    scanf("%d",&pd->num);
    printf("修改成功\n\n");
    return head;
}

STU *sel_stu(STU *head)
{
    
    printf("请输入要查找位置(从0开始):\n");
    int index = 0;
    scanf("%d",&index);
    int len =get_len(head);
    if (index >= len||index < 0)
    {
        printf("输入的位置有误\n");
        return head;
    }


    STU *pd = head;
    for(int i = 0; i < index; i++)
    {
        pd = pd->next;
    }
    printf("%s的信息为\n姓名:%s 性别:%s 学号:%d\n",pd->name,pd->name,pd->sex,pd->num);


    return head;
}
void my_enum(int tag)
{
    switch (tag)
    {
    case 1:
        print_link(head);
        break;
    case 2:
        head = add_stu(head);
        break;
    case 3:
        head = insert_stu(head);
       
        break;
    case 4:
        head = del_stu(head);
        break;
    case 5:
        head = upd_stu(head);
        break;
    case 6:
        head = sel_stu(head);
        break;
    default:
        printf("输入有误,请重新输入\n");
        break;
    }
}
void free_link(STU *head)
{
    STU *pd = head;
    while (pd != NULL)
    {
        //记录其下一个节点
        STU *next = pd->next;
        //释放当前节点
        free(pd);
        //更换当前节点
        pd = next;
    }
    
}
int main(int argc, char const *argv[])
{
    while(1)
    {
        printf("1,查询所有学员信息\n2,添加学员信息\n3,插入学员信息\n4,删除学员信息\n5,修改学员信息\n6,查找指定位置的学员\n7,退出程序\n");
        printf("请输入本次操作的选项(输入对应的数字)\n");
        int tag = 0;
        scanf("%d",&tag);
        if (tag != 7)
        {
            my_enum(tag);
        }
        else
        {
            free_link(head);
            printf("欢迎下次光临\n");
            break;
        }
        
    }
    return 0;
}
