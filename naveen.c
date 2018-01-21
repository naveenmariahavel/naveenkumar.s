#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,N;
clrscr();
printf("Enter value of a:");
scanf(%d",&a);
printf("\n enter value of b:");
scanf("%d",&b);
N=a<b;
N<100000?printf("positive"):printf("negative");
getch();
}
