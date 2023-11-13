 //字符串的逆序
#include<stdio.h>
#include<stdio.h>
void severse_string(char arr[])
{
	int len = strlen(arr);
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";
	severse_string(arr);
	printf("%s\n", arr);
	return 0;
}
