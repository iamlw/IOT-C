#include<stdio.h>
#include <string.h>
int isSubstring(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i, j;
    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    char a[]="hello world";
    char b[]="worlds";
    int res=isSubstring(a,b);
    printf("%d\n",res);

    return 0;
}
