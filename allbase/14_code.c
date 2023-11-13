#include<stdio.h>
void Bubble_sort(int arr[], int size)
{
	int j,i,tem;
	for (i = 0; i < size-1;i ++)
	{
		int count = 0;
		for (j = 0; j < size-1 - i; j++)	
		{
			if (arr[j] > arr[j+1])
			{
				tem = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tem;
				count = 1;
				
			}
		}
		if (count == 0)			
				break;	
	}
 
}
int main()
{
	int arr[10];
	int i;
	
	printf("请输入10个数\n");
	for (i = 0; i < 10; i++)		
	{
		scanf("%d", &arr[i]);
	}
	printf("排序前的数组>");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
 
	printf("\n排序后的数组>");
	Bubble_sort(arr, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
 
	return 0;
}