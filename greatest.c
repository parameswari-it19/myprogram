#include <stdio.h>
void main()
{
  int a,b,c;
printf("enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
 {
printf("a is greatest");
}
else if(b>c)
{
printf("b is greatest");
}
else
{
printf("c is greatest");
}
}
