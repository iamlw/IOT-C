#include<stdio.h>


int fun01(int *arr,int size)
{
    int max=arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        } 
    }
    return max;
}

void test01()
{
    int arr[5]={88,9,45,96,45};
    int result=fun01(arr,5);
    printf("result=%d\n",result);
}

char fun02(char str[])
{
    for (int i = 0; i < (strlen(str)-1)/2; i++)
    {
        char temp=str[i];
        str[i]=str[strlen(str)-1-i];
        str[strlen(str)-1-i]=temp;
    }
    return str;
    
}
void test02()
{
    char s[]="hello";
    fun02(s);
    for (int i = 0; i < 6; i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    
}


int main(int argc, char const *argv[])
{

    test02();
    return 0;
}
