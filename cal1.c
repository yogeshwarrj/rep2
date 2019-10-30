#include<stdio.h>
void main()
{
int n,a,b;
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
printf("Enter th choice 1 for addition\n 2 for sub\n 3 for mul\n 4 for div");
scanf("%d",&n);
switch(n)
{
case 1: printf("addition= %d",a+b);
        break;
case 2: printf("sub=%d",a-b);
        break;
case 3: printf("mul=%d",a*b);
        break;
case 4: printf("div=%d",a/b);
        break;
}
}
