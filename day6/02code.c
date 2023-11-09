#include<stdio.h>
// 设计计算个人所得税的函数，返回应缴纳所得税的金额。免税额为3500，7级超额累进税率： 
// 全月应纳税所得额                         税率                      速算扣除数(元) 
// 全月应纳税额不超过1500元                  3%                           0 
// 全月应纳税额超过1500元至4500元           10%                           105 
// 全月应纳税额超过4500元至9000元           20%                           555 
// 全月应纳税额超过9000元至35000元          25%                           1005 
// 全月应纳税额超过35000元至55000元         30%                           2755 
// 全月应纳税额超过55000元至80000元         35%                           5505 
// 全月应纳税额超过80000元                  45%                           1350
// 注意:月薪使用键盘录入 应纳税额=应纳税所得额×适用税率-速算扣除数

void givmoney(int money){
      int give;
      if(money<=1500)
  {
    give=money*0.03;
  }else if(money>1500&&money<=4500)
  {
    give=money*0.1+105;

  }else if(money>4500&&money<=9000)
  {
        give=money*0.2+555;

  }else if(money>9000&&money<=35000)
  {
        give=money*0.25+1005;

  }else if(money>35000&&money<=55000)
  {
        give=money*0.3+2755;

  }else if(money>55000&&money<=80000)
  {
        give=money*0.35+5505;

  }else if(money>80000)
  {
        give=money*0.45+1350;

  }
  printf("应缴纳税为:%d\n",give);
}



int main(int argc, char const *argv[])
{
  int money;
  printf("请输入月薪：");
  scanf("%d",&money);
  givmoney(money);
  

  return 0;
}