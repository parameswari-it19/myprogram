#include <stdio.h>
int find_max(int x,int y) {
    if(x>y)
    return x;
    else
    return y;
}
int main() {
    int a,b,max;
    scanf("%d%d",&a,&b);
    max=find_max(a,b);
    printf("%d is max value",max);
    return 0;
}
