/*@函数名称: toupper

　　函数原型: int toupper(int ch);

　　函数功能: 将ch字符转换成大写字母

　　函数返回: 与ch相应的大写字母

　　参数说明:*/

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

int main()

{

    char x='a', y='b',z='A',w='*';

    printf("Character %c toupper is %c\n",x,toupper(x));

    printf("Character %c toupper is %c\n",y,toupper(y));

    printf("Character %c toupper is %c\n",z,toupper(z));

    printf("Character %c toupper is %c\n",w,toupper(w));

    return 0;

}