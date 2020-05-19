#include <stdio.h>

int main(){
	int n,s;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n],arr[n];

	for(int i=0;i<n;i++){
		printf("Nhap so thu %d:\n",i);
		scanf("%d",&ary[i]);
	}
	int min;
	for(int i=0;i<n;i++){
	if(ary[i]>0){
		min=ary[i];
		break;
	}
	
	 int min = ary[0];
     for(int i=0;i<n;i++)
	 {if(min > ary[i]&&ary[i]>0)
			min = ary[i];  
}
}printf("%d",min);
}



	
