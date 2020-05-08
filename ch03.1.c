#include <stdio.h>
#include <ctype.h>//使用字符类型库函数
int ASCII(char x)
{
    if(x >= 'a' && x <= 'z')
    {
        x=x-32;
        return x;
    }
    else if(x >= 'A' && x <= 'Z')
    {
        x=x+32;
        return x;
    }
    else if (x>='0'&&x<='9')
    {
        x='0'+x;
    }
    else
        return 0;
}
int main()
{
    char ch1;
    scanf("%c",&ch1);//输入一个字符

    if (isalnum(ch1) != 0)//判断字符在函数里面的返回值是否是0
        printf("%c is the ASCIInumber or alphebet,ASCII:%d", ch1,ASCII(ch1));//不是0，就是字母或数字,输出ASCII码
    else
        printf("%c is not the ASCIInumber nor alphebet,ASCII:%d", ch1,ASCII(ch1));//是0则不是字母或数字

    return 0;
}
