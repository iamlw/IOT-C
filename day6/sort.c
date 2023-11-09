#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
  int arr[10]={0};
  int len =sizeof(arr)/sizeof(arr[0]);
  srand(time(NULL));
  setNum(arr,10);
  printNums(arr,10);
  sortM(arr,10);
  printNums(arr,10);


  return 0;
}

//随机数
void setNum(int arr[],int len)
{
for (size_t i = 0; i < len; i++)
{
  arr[i]=rand()%100;
}

}

//打印数组内容
void printNums(int arr[],int len)
{
for (size_t i = 0; i < len; i++)
{
  printf("%d\n",arr[i]);
}
}

//冒泡排序
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
  
}
