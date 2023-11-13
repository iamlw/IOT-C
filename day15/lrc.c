#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lrc.h"
#include "./pos/console.h"


char * getFileText()
{
    FILE * p=fopen("./text/简单爱.lrc","r");
    if (p==NULL)
    {
        printf("文件打开失败\n");
        return NULL;
    }

    fseek(p,0,SEEK_END);
    int len=ftell(p);
    rewind(p);
    
    char * lrc=malloc(len+1);

    fread(lrc,len,1,p);
    fclose(p);
    return lrc;
}

int cutArr(char * s,char * arr[])
{
    arr[0]=strtok(s,"\r\n");
    int index=0;
    while (1)
    {
        arr[++index]=strtok(NULL,"\r\n");
        if (arr[index]==NULL)
        {
            break;
        }
    }
    return index;
}

void myshow(char * arr[])
{
    clear_screen();
    cusor_hide();
    for (int i = 0; i < 4; i++)
    {
        cusor_moveto(40, i+1);
        set_fg_color(COLOR_RED);
        char t[20]="";
        sscanf(arr[i],"%*4s%[^]]",t);
        printf("%s\n",t);
    }
    
}

LRC * saveLrc(int num,char * list[])
{
    LRC *head = NULL,*new_LRC = NULL;
    int m,s,ms;

    int timeBuf[10];
    int timeNum = 0;
    char * str;
    for(int i = 4; i < num; i++)
    {
        str = list[i];
        timeNum = 0;
        while(*str == '[')
        {

            sscanf(str,"[%2d:%2d.%2d",&m,&s,&ms);
            timeBuf[timeNum] = m * 60 + s;
            timeNum++;
            str = str + 10;
        }

        for (int j = 0; j < timeNum; j++)
        {

            new_LRC = malloc(sizeof(LRC));
            new_LRC->time = timeBuf[j];
            strcpy(new_LRC->lrc_buf,str);

            new_LRC->n = NULL;

            if (head == NULL)
            {

                head = new_LRC;
                head->h = NULL;
                head->n = NULL;
            }else
            {

                LRC *myh = head;

                while(new_LRC ->time >= myh ->time && myh->n != NULL)
                {
                    myh = myh->n;
                }
                if (myh -> time > new_LRC -> time)
                {
                    if (myh == head)
                    {
                        new_LRC->h = NULL;
                        new_LRC->n = head;
                        head ->h = new_LRC;
                        head = new_LRC;
                    }
                    else
                    {
                        LRC * h = myh -> h;
                        h -> n = new_LRC;
                        new_LRC -> h = h;
                        new_LRC -> n = myh;
                        myh ->h = new_LRC;
                    }
                }
                else
                {
                    new_LRC->h = myh;
                    myh->n = new_LRC;
                }
            }
        }
    }

    return head;
}




void showTime(TIME time)
{
    char t[30];
    sprintf(t,"%02d:%02d.%02d",time.m,time.s,time.ms);
    color_pos_printf(t,39,5,COLOR_RED);
}

void color_pos_printf(char *str,int x,int y,int color)
{
    cusor_moveto(x,y);
    set_fg_color(color);
    printf("%s\n",str);
}

void showLRC(LRC *start,LRC *pd)
{
    for(int i = 0; i < 5; i++)
    {
        if (start == pd)
        {
            color_pos_printf(start->lrc_buf,30,6+i,COLOR_GREEN);
        }
        else{
            color_pos_printf(start->lrc_buf,30,6+i,COLOR_WHITE);
        }
            start = start -> n;
    }
}

LRC* findStartLRC(LRC * lrc)
{

    if (lrc->h == NULL)
    {
        return lrc;
    }

    else if(lrc->h ->h == NULL)
    {
        return lrc ->h;
    }

    else if(lrc -> n == NULL)
    {
        return lrc -> h -> h -> h -> h;
    }

    else if (lrc -> n -> n == NULL)
    {
        return lrc -> h -> h -> h;
    }

    else
    {
        return lrc -> h -> h;
    }
}

void freeLink(LRC * head)
{
    while (head != NULL)
    {
        if (head -> n != NULL)
        {
            LRC * lrc = head->n;
            free(head);
            head = lrc;
        }
        else
        {
            free(head);
            head = NULL;
        }
    }
}

LRC* findLRC(LRC * lrc,int time)
{
    while (lrc != NULL)
    {
        if (lrc->time == time)
        {
            return lrc;
        }
        else
        {
            lrc = lrc ->n;
        }
    }
    return NULL;
}
