#include<stdio.h>
int main(){
	
	
	int a,b,c;
	do{
		printf("Nhap so a,b (a<b):\n");
	scanf("%d",&a);
	scanf("%d",&b);}
	while (a>b);
	int s = 0;
	for(int i=a+1; i<b;i++){
		s=s+i;		
	 }
	 c=s+a+b;
	 printf("Tong cac so tu a den b la : %d",c);
		
		
	}
	
	



