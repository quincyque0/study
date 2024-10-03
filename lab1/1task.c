#include<stdio.h>
int main(){
int n = 2, flag = 0, a;
printf("enter answer\n");
scanf("%d", &a);
while(a%n!=0){
	n++;
	if (n==a){flag = 1;break;}
}
printf("primeif 1 not prime if 0%d",flag);


}
