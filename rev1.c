#include<stdio.h>
void main()
{
 int a[10],n,i,j,b[10];
 printf("enter no of values");
 scanf("%d",&n);
 printf("enter n elements to array");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=n-1,j=0;i>=0,j<+n;i--,j++)
 {
 b[j]=a[i];
 }
 for(i=0;i<=n;i++)
 {
 printf("%d",a[i]);
 }
 for(i=0;i<=n;i++)
 {
 printf("%d",b[j]);
 }
 }

