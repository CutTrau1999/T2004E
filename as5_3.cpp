#include<stdio.h>
int main(){

int n,a;
printf("Nhap vao so nguyen duong n : \n");
scanf("%d",&n);
if(n>0){



int i=0;
for (n;n>0 ;){
	a=n%10;
	n/=10;
	i=i+a;
    }
    printf("Tong cac chu so cua n la :%d",i);
	
	}
	else{printf("n khong phai so nguyen duong");
    }
}

