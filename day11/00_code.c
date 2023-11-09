#include<stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(int argc, char const *argv[])
{
    char *s1="hello";
    char *s2=(char *)calloc(strlen(s1)+1,1);
    if (s2==NULL)
    {
        printf("内存开辟失败");
        return 0;
    }
    
    strcpy(s2,s1);
    printf("%s\n",s2);
    if (s2!=NULL)
    {
        s2=NULL;
        free(s2);
       
    }
    
    
    return 0;
}
