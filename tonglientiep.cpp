#include<stdio.h>
int main(){
	int n,i;
	printf("Nhap vao so phan tu mang:\n");
	scanf("%d",&n);
	int a[n],s[n];
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d:\n",i);
		scanf("%d",&a[i]);
	}
	int k;
	for(int i=0;i<k;i++){
		s[0]+= a[i];
	}
	for(int i=0;i<n-k+1;i++){
		s[i+1] = s[i] - a[i-1] + a[i+k-1];
	}
    int max = s[0];
	for(int i = 0 ; i < n - k + 1 ; i++)
	{
		if(s[i] > max ){
		
			max = s[i];}
	}
	for(int i = 0 ; i < n - k + 1 ; i++)
	{
	}printf("%d",max);
	}

