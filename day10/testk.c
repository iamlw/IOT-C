#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{   
    //定义一个二维数组存了两个一维数组，分别是"6937"和"8254"
    char ch[2][5]={"6937","8254"};
    //定义一个指针数组，长度为2，暂时没存东西
    char*p[2];
    //定义三个整形变量
    int i,j,s=0;
    //ch[0]="6937";
    //ch[1]="8254";    
    //p[0]="6937";
    //p[1]="8254";
    //经过循环p里面存两个地址，分别是6937和8254的首地址,循环完p等价ch
    for(i=0;i<2;i++)
        p[i]=ch[i];
    //  i   j   p[i][j]     s
    //  0   0   6           0*10+6=6
    //  0   2   3           6*10+3=63
    //  1   0   8           63*10+8=638
    //  1   2   5           638*10+5=6385
    for(i=0;i<2;i++)
        for(j=0;p[i][j]>'\0';j+=2)
        s=10*s+p[i][j]-'0';
         printf("%d\n",s);

         //memset
/*          int a[5]={1,2,3,4,5};
         memset(a,0,12);
         for (int i = 0; i < 5; i++)
         {
            printf("%d\n",a[i]);
         } */
         
    return 0;
}
