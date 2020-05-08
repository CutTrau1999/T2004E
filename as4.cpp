#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,p,s;
	printf("Nhap vao so do 3 canh cua tam giac:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c){
		if(a+c>b){
		p=a+b+c;
		s=(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)))/4;
		printf("a,b,c la 3 canh cua tam giac co chu vi la %d (don vi chu vi) va dien tich la %d (don vi dien tich)",p,s);}
		else{
			printf("a,b,c khong phai 3 canh cua tam giac");
			}
			}else{
				printf("a,b,c khong phai 3 canh cua tam giac");}
			}
		
	
