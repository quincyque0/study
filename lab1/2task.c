#include<stdio.h>
int main(){
int s,i,n;
printf("enter ansver for factorial\n");
scanf("%d", &n);
for (s=1,i=1;i<=n;i++)s = s * i;
printf("%d",s);
}
