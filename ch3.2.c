#include<stdio.h>
#include<math.h>
int prime(int n)//编写函数判断是否为素数
{
    int i;

    if(n<=1)
        return 0;
    else
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            break;//不是素数跳出循环
        }
    if(i>sqrt(n))
        return 1;//是素数返回1
    else
        return 0;//不是素数返回0
}

int main()
{
    int m,n,i;
    printf("Enter two numbers:");
    scanf("%d%d",&m,&n);//输入两个整数
    if(m<n)//判断m和n的大小
    {
        for(i=m;i<=n;i++)
        if (prime(i)!=0)//判断返回值是否是0
        {
            printf("%6d", i);//如果不是0，是素数
        }
    }
    else
    {
        printf("Invalid value!");//如果m>n，无效！
    }
    
    printf("\n");

    return 0;
}