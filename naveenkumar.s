#include<stdio.h>
void main()
{
int a,b,N;
printf("Enter the value of A:");
scanf("%d",&a);
printf("Enter the value of B:");
scanf("%d",&b);
N=a<b;
N<100000?printf("positive"):printf("negative");
}
