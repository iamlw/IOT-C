#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define F "%d,%d\n"
int main(int argc, char const *argv[])
{
    int a[3][4]={1,2,3,4,
                 5,6,7,8,
                 9,10,11,12};

    printf("%d\n", a);
    printf(F,a,*a); 
    printf(F,a[0],*(a+0));
    printf(F,&a[0],&a[0][0]);

    printf(F,a[1],a+1);

    printf(F,&a[1][0],*(a+1)+0);

    printf(F,a[2],*(a+2));

    printf(F,&a[2],a+2);

    printf(F,a[1][0],*(*(a+1)+0));

    return 0;
}
