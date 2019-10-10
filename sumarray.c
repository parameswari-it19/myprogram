#include<stdio.h>
void main() {
     int n,a[n],i,sum=0;
     printf("enter the values");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
        for(i=0;i<n;i++)
        {
         sum=sum+a[i];
        }
         printf("%d",sum);
     
}
