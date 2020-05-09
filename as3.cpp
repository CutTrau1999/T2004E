#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,x1,x2,x;
	printf("Nhap vao 3 so hang a,b,c de giai phuong trinh bac 2 ax^2+bx+c \n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	int d;
	d=b*b-4*a*c;
    if(a!=0){
    	if(d>0){
    		x1=(-b+sqrt(d))/(2*a);
    		x2=(-b-sqrt(d))/(2*a);
    		printf("Phuong trinh co 2 nghiem :\n");
    		printf("x1 = %d\n",x1);
    		printf("x2 = %d\n",x2);
		}else{
			if(d=0){
				x=-b/2*a;
				printf("Phuong trinh co nghiem kep:\n");
				printf("x = %d",x);}
				else{
					printf("Vo nghiem");
				}
			}}else{printf("Day khong phai phuong trinh bac 2");
			}
		}
	
	

