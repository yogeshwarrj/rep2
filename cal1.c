#include<stdio.h>
void main()
{
int n,a=10,b=5;
printf("Enter th choice 1 for addition\n 2 for sub\n ");
scanf("%d",&n);
switch(n)
{
case 1: printf("addition= %d",a+b);
        break;
case 2: printf("sub=%d",a-b);
        break;
}
}
