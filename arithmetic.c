#include <stdio.h>
void main()
{
int a,b,c,ch;

printf("enter the numbers");
scanf("%d%d",&a,&b);
printf("enter the option:1.add\n 2.sub\n 3.multiply\n 4.div\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
c=a+b;
printf("%d",c);
break;
case 2:
c=a-b;
printf("%d",c);
break;
case 3:
c=a*b;
printf("%d",c);
break;
case 4:
c=a/b;
printf("%d",c);
break;
default:
printf("please enter the correct value");
}
}
