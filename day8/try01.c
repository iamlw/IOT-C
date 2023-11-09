#include<stdio.h>
int main(int argc, char const *argv[])
{
    //指针大小，64位8字节
/*     printf("%ld\n",sizeof(char *));
    printf("%ld\n",sizeof(int *));
    printf("%ld\n",sizeof(short *));
    printf("%ld\n",sizeof(long *));
    printf("%ld\n",sizeof(float *));
    printf("%ld\n",sizeof(double *)); */
    char ch1='a';
    char *p=&ch1;
    char* ch2=&ch1;
    int * a=10;
    float * f="1.2";
    double * d='2.2';
    printf("%p\n",ch1);
    printf("%p\n",ch2);
    printf("%p\n",a);
    printf("%p\n",f);
    printf("%p\n",d);

    return 0;
}
