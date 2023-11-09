#include<stdio.h>
int main(int argc, char const *argv[])
{
    fun04();
    return 0;
}
void fun04()
 {
 char strs[3][128] = {0};
 for(int i = 0; i < 3; i++)
 {
 fgets(strs[i],sizeof(strs[i]),stdin);
 }
 for(int i = 0; i < 3; i++)
 {
 printf("%s",strs[i]);
 }
 }