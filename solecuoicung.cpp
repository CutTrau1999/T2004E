
#include<stdio.h>
int main(){
	
	int n,x;
	
	printf("Nhap gia tri n cua mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int i;
	for(int i=n-1;i>=0;i--){
		if(arr[i]%2!=0){
			x=arr[i];
			break;
		}
		
		}
		if(x%2!=0){
		printf("So le cuoi cung la : %d",x);
	}else{
		printf("Khong co so le");
	}
		}
		
