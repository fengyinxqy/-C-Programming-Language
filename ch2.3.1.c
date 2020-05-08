#include <stdio.h>
#include <math.h>
double f(double x) //被积函数的定义
{
    double y;
    y = sqrt(4 - x * x);
    return (y);
}
int main()
{
    int i, n;          //n为区间等分的个数，越大值越准确
    double a, b, h, s; //a为积分下限。b为积分上限，h为步长
    printf("积分下限 a:\n");
    scanf("%lf", &a);
    printf("积分上限 b:\n");
    scanf("%lf", &b);
    printf("区间等分个数 n:\n");
    scanf("%d", &n);
    h = (b - a) / n;                 //计算步长
    s = 0.5 * (f(a) + f(a + h)) * h; //一个步长面积的计算
    for (i = 1; i < n; i++)
    {
        s = s + 0.5 * (f(a + i * h) + f(a + (i + 1) * h)) * h;
    }
    printf("函数f(x)的积分值为s=%10.6f\n", s);

    return 0;
}