#include <stdio.h>
#include <math.h>//数学库函数
int main()
	{
		double  x,y;
		printf("Enter two number:"); 
		scanf("%lf%lf",&x,&y);
		printf("%0.3lf\n",sqrt(x));//对x开方
		printf("%0.3lf\n",exp(x));//以e为底x次幂
		printf("%0.3lf\n",pow(x,y));//x的y次方

		return  0;
	} 
