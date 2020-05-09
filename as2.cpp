#include <stdio.h>
int main (){
	int x,x2,x3;
	printf("Nhap vao 3 so hang:\n");
	scanf("%d",&x);
	printf("Da nhap so thu nhat\n");
	scanf("%d",&x2);
	printf("Da nhap so thu hai\n");
	scanf("%d",&x3);
	printf("Da nhap so thu ba\n");
	if(x<x2){
		if(x<x3){
		printf("So nho nhat la %d",x);}else{printf("So nho nhat la %d",x3);}
		}else{
			if(x2<x3){
				printf("So nho nhat la %d",x2);}
				else{printf("So nho nhat la %d",x3);}
				}
			}
				
	
