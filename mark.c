#include <stdio.h>
void main()
{
 int a,b,c,d,e,total,result;
 printf("enter 5 marks");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 total=a+b+c+d+e;
 printf("%d",total);
 if(a<50&&b<50&&c<50&&d<50&&e<50)
{
printf("fail");
}
else
{
printf("pass");
}
}
