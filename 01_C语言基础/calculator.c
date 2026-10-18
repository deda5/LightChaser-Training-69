#include <stdio.h>
int main()
{
    double num1,num2;
    char cal;//定义运算符号变量

    printf("请输入算式,仅支持 + - * /\n");//避免输入别的运算符号导致无输出
    scanf("%lf %c %lf",&num1,&cal,&num2);

    if(cal=='+')
    {
        printf("结果=%.2f\n",num1+num2);
    }
    if (cal == '-')
    {
        printf("结果=%.2f\n",num1-num2);
    }
    if(cal=='*')
    {
        printf("结果=%.2f\n",num1*num2);
    }
    if(cal=='/')
    {
        if(num2==0)//除数为0提示
        {
            printf("除数不能为0!\n");
        }
        else
        {
            printf("结果=%.2f\n",num1/num2);
        }
    }
    return 0;




}