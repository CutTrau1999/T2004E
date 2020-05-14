#include <stdio.h>
int main(){
printf("nhap so a,b,c:\n");
int a,b,c;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
for(a;a<=0;){
	printf("Nhap lai so a:\n");
	scanf("%d",&a);
	}
	for(b;b<=0;){
	printf("Nhap lai so b:\n");
	scanf("%d",&b);
	}
	for(c;c<=0;){
	printf("Nhap lai so c:\n");
	scanf("%d",&c);
	}
	if(a+b>c&&a+c>b&&b+c>a){
		printf("a,b,c la 3 canh cua tam giac");
		}else{
			for(c;c>=a+b;){
				printf("Nhap lai c:\n");
				scanf("%d",&c);
				}
				for(b;b>=a+c;){
				printf("Nhap lai b:\n");
				scanf("%d",&b);
				}
				for(a;a>=b+c;){
				printf("Nhap lai a:\n");
				scanf("%d",&a);
			    }
				printf("a,b,c la 3 canh cua tam giac");
				}
				}
		
		
	
