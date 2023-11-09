#include<stdio.h>
    //设计一个函数,判断字符串1是否包含字符串2,如果包含返回1,不包含返回0
    //abcde
    //abc
int contain(char *str1,char *str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    if (len1<len2)
    {
        return 0;
    }else{
        for (int j = 0; j < len1; j++)
        {
            for (int i = 0; i < len2; i++)
            {   
                if (str2[i]==str1[j])
                {
                    j++;
                }
            
            }
        }
        
     
        
    }
    
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
