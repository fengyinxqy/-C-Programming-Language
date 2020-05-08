#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    srand((unsigned)(time(NULL))); //播种子
    for (i = 0; i < 10; i++)       //产生10个随机数
    {
        printf("%d\n", rand());
    }
    return 0;
}