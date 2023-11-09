#include <time.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc,const char* argv[]) {
    srand(time(NULL));
    char red[6] = {},cnt = 0,i = 0;
    while(6 > cnt) {
        int num = rand()%33 + 1;
        for(i=0; i<cnt; i++) {
            if(num == red[i]) {
                break;
            }
        }
        if(i == cnt) {
            red[cnt++] = num;
        }
    }
    printf("red:");
    for(int i=0; i<6; i++) {
        printf("%hhd ",red[i]);
    }
    printf("blue:%d\n",rand()%16+1);
}