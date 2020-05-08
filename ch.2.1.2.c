/*  函数名称: ispunct

　　函数原型: int ispunct(int ch);

　　函数功能: 检查ch是否是标点字符(不包括空格),即除字母,数字和空格以外的所有可打印字符

　　函数返回: 是返回1,否则返回0*/
#include <stdio.h>
#include<ctype.h>
int main()
{

    char ch1=',';

    char ch2='a';

    if(ispunct(ch1)!=0)

    printf("%c is the ASCIIpunct\n",ch1);

    else

    printf("%c is not the ASCIIpunct\n",ch1);

    if(ispunct(ch2)!=0)

    printf("%c is the ASCIIpunct\n",ch2);

    else

    printf("%c is not the ASCIIpunct\n",ch2);

    return 0;

}