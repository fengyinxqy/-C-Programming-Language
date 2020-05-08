#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;
    printf("Enter x:\n");
    scanf("%lf",&x);
    printf("y=%.2f\n",pow(atan(x/2),2));

    return 0;
}