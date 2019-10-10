#include <stdio.h>
void main()
{
 int a[15],i,l;
 printf("enter 5 numbers");
 for(i=0;i<=4;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("enter the location");
 scanf("%d",&l);
 printf("%d",a[l]);
}
