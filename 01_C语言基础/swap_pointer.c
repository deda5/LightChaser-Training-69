#include <stdio.h>
void swap(int*p1,int*p2)//定义函数
{
    int temp; //定义一个变量用来存放一个数
    temp=*p1;//解引用，取出p1保存的地址里面存放的值，把值存入temp
    *p1=*p2;
    *p2=temp;
}

int main()
{
    int a=97;
    int b=98;
    printf("交换前:a=%d,b=%d\n",a,b);
    swap(&a,&b);    //&获取变量的地址 传给swap函数的指针p1 p2
    printf("交换后:a=%d,b=%d\n",a,b);
    return 0;

}