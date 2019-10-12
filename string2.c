#include <stdio.h>
void main() {
    
 char s[6];
 int i;
 printf("enter a string");
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
 {
  printf("%c\n",s[i]);
}
}
