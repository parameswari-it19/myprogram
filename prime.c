#include <stdio.h>
void main()
{
 int i,n,c;
 printf("enter a number");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
  if(n%1==0)
  c++;
else
c=0;
}
if(c>0)
{
printf("it is not  a prime number");
  }
else
 {
 printf("it is a prime number");
}
}
