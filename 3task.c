#include<stdio.h>
int main(){
int a,k,n,s;
printf("enter ansver for ostatok 10\n");
scanf("%d",&a);
for (n = a,s = 0;n!=0;n=n/10)
{
k = n %10 ;
if (k>s)s=k;
}
printf("%d",s);
}
