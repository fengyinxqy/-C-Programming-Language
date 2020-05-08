/*@函数名称:     ctime 

函数原型:     char *ctime(long time) 

函数功能:     得到日历时间 

函数返回:     返回字符串格式：星期,月,日,小时:分:秒,年 

参数说明:     time-该参数应由函数time获得 

所属文件:     <time.h> */
#include <stdio.h>
#include <time.h>//time函数
int main()
{
    time_t t;
    time(&t);
    printf("Today's date and time:%s",ctime(&t));
    return 0;
}