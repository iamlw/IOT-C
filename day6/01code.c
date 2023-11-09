#include<stdio.h>


void sortM(int arr[],int len)
{
  for (int j = 0; j < len-1; j++)
  {
      for (int i = 0; i < len-1; i++)
  {
    if (arr[i]>arr[i+1])
    {
      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;

    }
    
  }
  }
  printf("\n");
  
}
// sizeof(arr)/sizeof(arr[0])
void printNums(int arr[],int len)
{
for (size_t i = 0; i < len; i++)
{
  printf("%d,",arr[i]);
}
  printf("\n,");

}

void findMax(int arr[],int len)
{
    int max=arr[0];
for (size_t i = 0; i < len; i++)
{
    if(arr[i]>max){
        max=arr[i];
    }
    
}  printf("最高分为%d\n",max);


}
void findMin(int arr[],int len)
{
    int min=arr[0];
for (size_t i = 0; i < len; i++)
{
    if(arr[i]<min){
        min=arr[i];
    }
}  printf("最低分为%d\n",min);

}

void avg(int arr[],int len)
{
    int sum=0;
    int avg;
    for (size_t i = 0; i < 10; i++)
    {
        sum+=arr[i];
    }
    avg=(int)sum/10;
    printf("平均分为：%d\n",avg);
}

void noPass(int core[],char name[][128],int len)
{

    for (size_t i = 0; i < len; i++)
    {
        if(core[i]<60){
            printf("%s同学成绩不合格\n",name[i]);
        }
    }
}
int main(int argc, char const *argv[])
{
    int core[10]={0};
    char name[10][128]={0};
    int len=sizeof(core)/sizeof(core[0]);

    printf("请输入10位同学分数:");
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d",&core[i]);     
    }
    printf("请输入10位同学姓名:");
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%s",name[i]);
    }

    findMax(core,len);
    findMin(core,len);
    avg(core,len);
    noPass(core,name,len);
    sortM(core,len);
    printNums(core,len);

    return 0;
}

