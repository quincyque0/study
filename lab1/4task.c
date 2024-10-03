#include<stdio.h>
int main(){
int n,a,s,k;
printf("enter ansver for inversion\n");
scanf("%d",&a);
for (n=a,s=0;n!=0;n=n/10)
{
k = n%10;s=s*10+k;

}
printf("%d",s);
}
