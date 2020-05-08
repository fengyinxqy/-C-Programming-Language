/*编写程序，求解方程ax+b=0的解*/
#include <stdio.h>
int function(float a, float b) //自定义函数
{
    float c;
    c = -b / a; //计算c
    return (c);
}
main()
{
    float a, b, x;
    printf("please input two number:");
    scanf("%f %f", &a, &b);
    if (a != 0) //判断a是否为0
    {
        x = function(a, b); //调用函数
        printf("x=%.2f\n", x);
    }
    else
    {
        printf("a is zero!");
    }

    return 0;
}