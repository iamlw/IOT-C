#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

#include "lrc.h"
#include "./pos/console.h"
#include "./mplayer/start_mplayer.h"
int main(int argc, char const *argv[])
{
    TIME time = {0,0,0};

    char * text = getFileText();
    char * list[50];
    int num = cutArr(text,list);
    printf("%d",num);
    myshow(list);


    LRC * head=saveLrc(num,list);
    free(text);
    showTime(time);
    showLRC(head,NULL);
    mplayer_play("./music/简单爱.mp3");
    LRC *pd = head;
    int t = 0;
    while(1)
    {
        int m=t/60;
        int s=t%60;
        time.m=m;
        time.s=s;
        showTime(time);
        pd = findLRC(head,t);
        if (pd != NULL)
        {
        
        myshow(list);

        showTime(time);

        LRC *h = findStartLRC(pd);

        showLRC(h,pd);

        if (pd -> n == NULL)
        {
        break;
        }
    }



    sleep(1);

    t++;
    }
freeLink(head);
cusor_show();








    return 0;
}
