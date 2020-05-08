/*
 * @Author: 肖祺彦
 * @Date: 2020-02-19 14:14:09
 * @LastEditTime: 2020-02-19 16:31:34
 * @LastEditors: 肖祺彦
 * @Description: In User Settings Edit
 * @FilePath: \Ctest\8.2.c
 */
#include <stdio.h>
int factorial(int n)//创建自定义函数
{
    int result = 1;
    while (n != 0)
    {
        result *= n--;
    }
    printf("n=%d\n", n);
    return result;//返回函数值
}
main()
{
    int num1, num2, result;//定义实参变量函数
    printf("input 2 numbers num1,num2=");
    scanf("%d,%d", &num1, &num2);
    result = factorial(num1) + factorial(num2);//调用factorial()函数并传递实参值
    printf("num1!+num2!=%d", result);
    printf("\n num1=%d,num2=%d\n", num1, num2);//主调函数实参num1和num2的值
    return 0;
}

