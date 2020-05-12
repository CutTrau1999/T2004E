#include <stdio.h>
int main(){

int x;
printf("Nhap so ( la so nguyen duong ):\n");
scanf("%d",&x);
if(x>=0&&x<=99){
    int a,b,c,d,k,a1,b1;
    a=x%10;
	a1=x/10;
	b=a1%10;
	b1=a1/10;
	c=b1%10;
	d=b1/10;
	k=10*a+b;
	printf("%d",k);
}

    else if(x>=100&&x<=999){
	int a,b,c,d,z,a1,b1;
    a=x%10;
	a1=x/10;
	b=a1%10;
	b1=a1/10;
	c=b1%10;
	d=b1/10;
	z=100*a+10*b+c;
	printf("%d",z);}
	
    else if(x>=1000&&x<=9999){
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

