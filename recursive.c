#include <stdio.h>
int main()
 {
    int n=4;
    int f=fact(n);
    printf("%d",f);
    return 0;
}
int fact(int a) {
    int f1=1;
    if(a>0)
    f1=a*fact(a-1);
    return f1;
}
