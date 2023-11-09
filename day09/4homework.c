#include<stdio.h>
int main(int argc, char const *argv[])
{
    long a=0x010203040506;
    char* b = &a;
    for (int i = 0; i < 6; i++)
    {
            printf("%x\n",*b-5+i);

    }
    

    return 0;
}
