#include <stdio.h>
#include <string.h>



//取整数M的第i位数
int GetDigit(int M, int i) 
{
	while(i > 1)
	{
		M /= 10;
		i--;
	}
	return M % 10;
}

// 最大位数
int MaxLen(int * num)
{
    int max=0;
    for (int i = 0; i < 10; i++)
    {         
        int temp=num[i];
        int a=1;
        while (temp/10!=0)
        {
            a++;
            temp=temp/10;
        }
        if (a>max)
        {
            max=a;
        }  
    }
    return max;
}

// 基数排序
void RadixSort(int *num, int len)
{
    int i, j, k, l, digit;
    int allot[10][10];   // 分配数组
    
    // 初始化分配数组全为0
    memset(allot, 0, sizeof(allot));
    
    // 遍历
    for (i = 1; i <= MaxLen(num); i++)
    {
        // 将每个数据的第i位数分配到allot数组中
        for (j = 0; j < len; j++)
        {
            // 获取当前数据num[j]的第i位数
            digit = GetDigit(num[j], i);  
            k = 0;
            // 查找插入的位置
            while (allot[digit][k])
            {
                k++;
            }
            // 将num[j]添加到分配数组allot的第digit行的末尾
            allot[digit][k] = num[j];
        }
        // 将分配数组的数据收集到原数组中
        l = 0;
        for (j = 0; j < 10; j++)
        {
            k = 0;
            // 获取数组allot的每一行的数据到原数组中
            while (allot[j][k])
            {
                num[l++] = allot[j][k++];
            }
        }
        memset(allot, 0, sizeof(allot));
    }
}

int main()
{
    
    int num[10] = {731, 2023, 66, 77, 147, 89, 4399, 238, 250, 888};

    RadixSort(num, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    
    return 0;
}
