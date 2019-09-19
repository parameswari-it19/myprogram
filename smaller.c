#include <stdio.h>
void main()
{
 int a,b,c,d;
 printf("enter the numbers");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if((a<b)&&(a<c)&&(a<d))
 {
 printf("smallest number is a");
}
else if((b<a)&&(b<c)&&(b<d))
{
printf("smallest number is b");
}
else if((c<b)&&(c<a)&&(c<d))
{
printf("smallest number is c");
}
else if((d<b)&&(d<c)&&(d<a))
{
printf("smallest number is d");
}
}
