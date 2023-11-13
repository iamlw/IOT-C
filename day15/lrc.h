#ifndef __LRC_H__
#define __LRC_H__
typedef struct lrc
{   
    int time;
    char lrc_buf[200];
    struct lrc * h;
    struct lrc * n;
}LRC;

typedef struct time
{
int m;
int s;
int ms;
}TIME;


extern char * getFileText();

extern int cutArr(char * s,char * arr[]);
extern void myshow(char * arr[]);
extern LRC * saveLrc(int num,char * arr[]);
extern void showTime(TIME time);
extern void color_pos_printf(char *str,int x,int y,int color);
extern void showLRC(LRC *start,LRC *pd);
extern LRC* findStartLRC(LRC * lrc);
extern void freeLink(LRC * head);
extern LRC* findLRC(LRC * lrc,int time);





















#endif