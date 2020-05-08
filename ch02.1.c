#include<stdio.h>
#include<time.h>      //rand()函数的头文件 
#include<stdlib.h>   //srand()函数的头文件 
#define PRINTF1 printf("Right!!!")
#define PRINTF2 printf("failure!,Right is %.2f ,good!!!",c)
main()
{
	int a,b,d;
	float c,m;
	srand((unsigned)time(NULL));  //做随机产生器的种子 
	a=rand()%15+1;                //以上上面得到的种子产生1~15之间的数 (数字范围可任意定义) 
	b=rand()%15+1;               //以上上面得到的种子产生1~15之间的数 (数字范围可任意定义)
	d=rand()%4+1;;               //以上上面得到的种子产生1~4之间的数 (数字范围可任意定义)
	switch (d)                   //按照d的值进行选择 
		{
			case 1: d='+'; break;      //如果d的值等于一，字符+赋值给d； 
			case 2: d='-'; break;
			case 3: d='*'; break;
			default: d='/'; break;
		}
	if(d=='+') c=a+b;        //如果d等于+，c等于a,b两数之和 
	else if(d=='-') c=a-b;
	else if(d=='*') c=a*b;
	else if(d=='/') c=(float)a/b;
	printf ("%d%c%d",a,d,b);
	printf("\nyour answer is=");
	scanf("%f",&m);
	if(m==c) PRINTF1 ;           //判断我们输入的答案是否准确，若准确显示PRINTF1，若答案错误显示输入的答案准确 
	else if(m!=c) PRINTF2;      // PRINTF1，PRINTF2 的宏替换值在最上面 
    return 0;
}