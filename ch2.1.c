/*  函数名称: isalnum

    函数原型: int isalnum(int ch);

    函数功能: 检查ch是否是字母或数字

    函数返回: 是字母或数字返回1,否则返回0*/
#include <stdio.h>
#include <ctype.h>//使用字符类型库函数
int main()
{
    char ch1='*';
    char ch2='a';
    if(isalnum(ch1)!=0)//判断返回值是否不是0
    printf("%c is the ASCIInumber or alphebet\n",ch1);
    else
    printf("%c is not the ASCIInumber nor alphebet\n",ch1);
    if(isalnum(ch2)!=0)
    printf("%c is the ASCIInumber or alphebet\n",ch2);
    else
    printf("%c is not the ASCIInumber nor alphebet\n",ch2);

    return 0;
}