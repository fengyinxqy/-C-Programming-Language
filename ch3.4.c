#include <stdio.h>
float fact(int n) //定义阶乘函数
{
    float s = 1.0;
    for (int i = 1; i <= n; i++)
    {
        s = s * i;
    }
    return s;
}
float mypow(float x, int n) //定义x的n次方函数
{
    float s = 1.0;
    if (n == 0)
    {
        return 1.0;
    }
    if (n == 1)
    {
        return x;
    }
    s = x;
    for (int i = 0; i < n - 1; i++)
    {
        s = x * s;
    }

    return s;
}
void main(void)
{
    float x = 0.0;
    int n = 0;
    float s;
    printf("Enter x and n:"); //输入提示
    scanf("%f %d", &x, &n);
    if (n == 1)
    {
        s = x;
    }
    else
    {
        s = 1 + x; //设置初始值为1+x
        for (int i = 2; i <= n; i++)
        {
            s = s + mypow(1.0, i - 1) * mypow(x, i) / fact(i);
        }
    }
    printf("%.4lf\n", s);
    return 0;
}