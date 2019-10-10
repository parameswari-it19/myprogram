#include <stdio.h>
void main()
{
 int i,a[10],n,j,temp;
 printf("enter the values");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
}
}
}

printf("ascending order:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}


 
