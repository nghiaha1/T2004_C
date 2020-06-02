#include <stdio.h>

int main(){
	int n;
	printf("nhap n=",n);
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0; i<n; i++){		
	printf("nhap so thu %d:",i);
	scanf("%d",&arr[i]);
	}
	
	int i;
	for(i=n; i>=0; i--){
		if(arr[i]%2 != 0){
			printf("so le cuoi cung cua mang la %d",arr[i]);
			break;
		}
	}
}
