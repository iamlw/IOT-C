#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    for (int i = 100; i < 1000; i++)
    {
        
        int g=i%10;
        int s=i%100/10;
        int b=i/100;

        if (i==g*g*g+s*s*s+b*b*b)
        {
            printf("%d\n",i);
        }
        
    
    }
    
    
    
}
