#include<stdio.h>
#include<string.h>
    //定义一个函数,在该函数中判断两个字符串是否相同

    //  adc
    //  adc
int same(char* str1,char* str2)
{
    int len=0;
    if (strlen(str1)==strlen(str2))
    {
        for (int i = 0; i <strlen(str1)+1 ; i++)
        {
            if (str1[i]=='\0')
            {
                printf("两字符串相同\n");
                return 1;
            }else if ((str1[i]==str2[i]))
            {
                printf("第%d位相同\n",i+1);
            } else{
                printf("两字符串不同\n");
                return 0;
            }
            

        }

    }else return 0;
    
}
int main(int argc, char const *argv[])
{
    char *arr1="dddca";
    char *arr2="dddca";
    int res=same(arr1,arr2);
    printf("%d\n",res);
    return 0;
}
