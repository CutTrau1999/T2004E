#include<stdio.h>
int main(){
	int a,b,i;
	printf("Nhap so: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	if (a==0&&b==0){
		printf("Khong co uoc chung");}
else if(a==0){printf("%d la uoc chung lon nhat",b);}
else if(b==0){printf("%d la uoc chung lon nhat",a);}
    else{

	
	for(int i = a-1; i <= a; i--){
		if(a%i==0&&b%i==0){printf("Uoc chung lon nhat la %d",i);
		break;
		}
			}				
	}
}


