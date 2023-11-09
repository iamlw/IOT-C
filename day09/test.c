#include<stdio.h>
int main(int argc, char const *argv[])
{
    //题目5
/*     int a[10]={0}, i=0;
	while(i<10) {
        scanf("%d",a);
        i++;
    } */

    //题目6
/*     int a[10]={0},*p=a;
    printf("%p\n",p+5);
    printf("%p\n",&a[5]); */

    //题目9
/*     int a[]={8,1,2,5,0,4,7,6,3,9};
    printf("%d\n",a[*(a+a[3])]);

    return 0; */

    //题目10
/*     int a[]={1,2,3,4,5,6,7,8,9,0}, *p=NULL, i=0;
    p=a;
    printf("%d\n",*(a+i));
    printf("%d\n",a[p-a]);
    printf("%d\n",p+i);

    printf("%d\n",*(&a[i])); */
/* 
    printf("%d\n",&(a+1));
    printf("%d\n",a++);
    printf("%d\n",&p);
    printf("%d\n",&p[i]); */

//题目12
/* int a[12]={1,2,3,4,5,6,7,8,9,10,11,12}, *p[4]={NULL},i=0;
	for(i=0;i<4;i++)
	  p[i]=&a[i*3];
	printf("%d\n",*p[0]);
	printf("%d\n",*p[1]);
	printf("%d\n",*p[2]);
	printf("%d\n",*p[3]); */

    //题目13
/*     int a[10]={0}, *p1=NULL, *p2=NULL;
    p1=a;
    p2=&a[5];
    printf("%x\n",p2-p1); */

    //题目14
/*     int s[4][5]={0},(*ps)[5]=NULL; 
    ps=s; 
    printf("%d\n",ps+1);
	printf("%d\n",*(ps+3));
	printf("%d\n",ps[0][2] );
	printf("%d\n",*(ps+1)+3);
	printf("%d\n",&s[3][2]); */

    //题目16
/*         int a[ ]={2,4,6,8,10},y=1,x=0,*p=NULL;
	    p=&a[1];			
	    for (;x<3;x++){
        y += *(p+x);		

        } 			
	    printf("%d\n",y);		
 */

    //题目17
/*         char *s="abcde";
        printf("%d\n",s);

        s+=2;
        printf("%d\n",s); */


}
