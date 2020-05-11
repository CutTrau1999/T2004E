#include <stdio.h>
int main(){

int x;
printf("Nhap so ( la so nguyen duong ):\n");
scanf("%d",&x);
if(x>=0&&x<=9999){
	int a,b,c,d,y,a1,b1;
	a=x%10;
	a1=x/10;
	b=a1%10;
	b1=a1/10;
	c=b1%10;
	d=b1/10;
	y=1000*a+100*b+10*c+d;
	printf("%d",y);}	

	else {
		printf("ERROR");}
		}

