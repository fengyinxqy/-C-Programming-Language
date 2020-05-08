/*编写程序，根据任意输入的年份，判断改年是否是闰年*/
#include <stdio.h>
int runyear(int n) //自定义函数
{
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) //符合闰年的条件
        return 1;                                     //符合返回1
    else
        return 0; //不符合返回0
}
int main()
{
    int year;
    printf("please input year:");
    scanf("%d", &year);
    if (runyear(year)) //调用函数
    {
        printf("%d is a runyear\n", year);
    }
    else
    {
        printf("%d is not a runyear\n", year);
    }
    return 0;
}