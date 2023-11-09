#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][3]={1,2,3,
                4,5,6};
    // int *p=&a;
    int (*p1)[3]=a;
    int *p2=&a;
    int *p3[3]={a[0][1],a[0][2],a[0][0],};
/*     printf("%d\n",**p1);
    printf("%d\n",*(*p1+1));
    printf("%d\n",**(p1+1));
    printf("%d\n",*p2+3); */
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",p3[i]);
    }
    
    

    return 0;
}
