#include <stdio.h>
float fun(int x, int n)//定义函数
{
    float S = 1 + x;
    int y=x;                    
    for (int i = 1; i < n; i++)         
        S += (x*=y) / ((float)i + 1);    
    return S;                           
}
int main(void)
{
    int x, n;
    printf("Enter x and n\n");
    scanf("%d %d", &x, &n);
    printf("sum=%f", fun(x, n)); //调用函数

    return 0;
}
