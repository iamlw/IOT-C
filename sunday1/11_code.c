#include<stdio.h>
/* 
    双色球
    双色球由6个红色球与1个蓝色球对应的号码组成
    红色球号码取值范围:1~33
    蓝色球号码取值范围:1~16
    中奖规则
    中3个红色球或2个红色球一个蓝色球	         5元
    中4个红色球					    	       20元
    中4个红色球一个蓝色球			    	 2000元
    中5个红色球						        20000元
    中5个红色球一个蓝色球				    200000元
    中6个红色球						        500000元
    中6个红色球一个蓝色球				    5000000元
    请编写代码完成双色球
    提示
    1,获取用户购买的号码
    2,获取本次中奖号码
    3,对比用户购买的号码与本次中奖的号码输出结果
 */

int  compareplay(int* a,int* b)
{
    static int red=0;
    static int blue=0;
    for (int i = 0; i < 6; i++)
    {
        if (a[i]==b[i])
        {
            red++;
        }
    }
    if (a[6]==b[6])
    {
        blue=1;
    }
    if (blue==1&&red==2||red==3)
    {
        return 5;
    }else if (red==4 && blue==0)
    {
        return 20;
    }else if (red==4 && blue==1)
    {
        return 2000;
    }else if (blue==0 && red==5)
    {
        return 20000;
    }else if (blue==1 && red==5)
    {
        return 200000;
    }else if (blue==0 && red==6)
    {
        return 500000;
    }else  if(blue==1 && red==6)
    {
        return 5000000;
    }else return 0;
}


int main(int argc, char const *argv[])
{
    int mine[7]=    {20,23,12,6,5,14,12};
    int truescore[7]={20,23,1,6,5,12,12};  
    int res=compareplay(mine,truescore);
    printf("中奖金额为%d\n",res);

    return 0;
}
