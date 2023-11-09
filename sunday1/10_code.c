#include<stdio.h>
#include<string.h>
    //计算班级的最高分,最低分,平均分,总分,成绩按从高到低排序(分函数)

void  findMax(int *arr,int len)
{
    int max=arr[0];

    for (int i = 0; i < len; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    printf("最高分为%d\n",max);
    
}
void    findMin(int *arr,int len)
{
    int mix=arr[0];

    for (int i = 0; i < len; i++)
    {
        if (mix>arr[i])
        {
            mix=arr[i];
        }
        
    }
    printf("最低分为%d\n",mix);
}
void    myAvg(int *arr,int len)
{
    int sum=0;

    for (int i = 0; i < len; i++)
    {
        sum+=arr[i];
    }

    int avg=sum/len;

    printf("平均分为%d\n",avg);
}
void   myAll(int *arr,int len)
{
    int sum=0;

    for (int i = 0; i < len; i++)
    {
        sum+=arr[i];
    }
    printf("总分为%d\n",sum);
}
void    my_sort(int *arr,int len)
{
    for (int j = 0; j < len-1; j++)
    {
        for (int i = 0; i < len-1; i++)
        {
            if (arr[i]<arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
void    sortM(int arr[],int len)
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
  
}
void sort01(int nums[],int len)
{
    //冒泡排序
    for (int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len-1; j++)
        {
            if (nums[j] > nums[j+1])
            {
                //交换位置
                int x = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = x;
            }
        }
    }
}

    //遍历数组
void    arrprint(int *arr,int len)
{

    for (int i = 0; i < len; i++)
    {
        printf("%d ,",arr[i]);
    }
    
}

int     main(int argc, char const *argv[])
{
    int core[10]={0};
    int len=sizeof(core)/sizeof(core[0]);
    printf("请输入10位同学分数:");
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d",&core[i]);     
    }


    findMax(core,len);
    findMin(core,len);
    myAvg(core,len);
    myAll(core,len);
    my_sort(core,len);
    printf("成绩降序排列为：");
    arrprint(core,len);

}
