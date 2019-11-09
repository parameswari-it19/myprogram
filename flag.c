#include <stdio.h>
void main()
{
 int a[]={1,2,3,4,5},x,flag=0,i;
 printf("enter the numbers");
 scanf("%d",&x);
 for(i=0;i<4;i++)
 {
  if(a[i]==x)
{
   flag=1;
   break;
        }
}
 if(flag==0)
{
  printf("element not present");
}
else
{
  printf("element present");
}
}

