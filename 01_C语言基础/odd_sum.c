#include <stdio.h>
int main()
{
    int i;
    int sum=0;//从0开始累加
    for(i=1;i<=100;i++)
    {
        if(i%2!=0)//通过余数不为零判断i为奇数
        {
            sum=sum+i;
        }
    }
    printf("1~100的奇数和=%d\n",sum);
    return 0;


}

/*
写完后问ai 说可以直接写
for(i=1;i<=100;i+=2)
   {
      sum+=i;
   }
更简洁 效果一样


*/