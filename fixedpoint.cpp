#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
float x0,x1=0,temp,acc=0.001;
printf("enter x0:");
scanf("%F",&x0);
do
{
temp=x1;
x1=(x0*x0+2)/30;
x0=x1;
}
while (fabs(temp-x1)>=acc);
printf("the root is %4f",x1);
getch ();
return 0;
}
