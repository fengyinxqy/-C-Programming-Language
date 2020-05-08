#include<stdio.h>
#include<stdlib.h>
void fun(int a[],int n,int x)
{
    int b[n];
    int i,j,k;
    j=n;
    for (i=0;i<n;i++)
    if (a[i]!=x) 
        b[n-j]=a[i];
    else
    {
        j++;
    }
        for (i=j;i<n;i++)
            b[i]=" ";
        for (i=0;i<n;i++)
            a[i]=b[i];
        for(i=0;i<5-n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main() 
{

    int x,n=0;
    int a[5]={1,2,3,4,5};
    printf("Enter x:\n");
    scanf("%d",&x);
    fun(a,n,x);
    return 0; 
}