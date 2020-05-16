#include<stdio.h>
int main(){
	int n,num1,num2,fibo;
	printf("Nhap so :\n");
	scanf("%d",&n);
	if(n<=1){printf("Khong co ket qua");
	}
	else{
	num1=0;
	num2=1;

	while(num1+num2<n){
	    fibo = num1+num2;
		num1 = num2;
		num2 = fibo;
		}printf("So fibonaci gan nhan la %d",num2);}
		
		
	}

