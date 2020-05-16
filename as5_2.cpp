#include<stdio.h>
int main(){

int n;
printf("Nhap vao so nguyen n : \n");
scanf("%d",&n);
int i=1;
for (n;n>=10 ;){	
	n/=10;
	i++;
  	
    }
    printf("So chu so cua n la %d",i);
	}

