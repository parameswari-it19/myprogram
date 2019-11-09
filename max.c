#include <stdio.h>
void main()
{
 int n,a[n],i,max;
 printf("enter a number");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
scanf("%d",&a[i]);
}
  a[0]=max;
  for(i=0;i<n;i++)
{
  if(a[i]>max)
  a[i]=max;
}
 printf("%d",max);
}

