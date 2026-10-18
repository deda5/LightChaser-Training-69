#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("输入数字个数:");//一共有几个数字
    if(scanf("%d",&n)!=1)return 1;

    double*arr=(double*)malloc(n*sizeof(double));//申请n个double的空间
    if(arr==NULL)//申请失败的处理报错
    {
        printf("内存不足\n");
        return 1;
    }
    double sum=0;
    for(int i=0;i<n;i++)
    {
        printf("请输入第%d个数字:",i+1);
        scanf("%lf",&arr[i]);
        sum=sum+arr[i];
    }
    double avg=sum/n;
    printf("平均值=%.2lf\n",avg);

    free(arr);//用完释放内存
    arr=NULL;//置空防止野指针
    return 0;


}