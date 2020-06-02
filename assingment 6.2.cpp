#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("nhap so thu %d:",i);
		scanf("%d",&arr[i]);
	}
	
	int min=arr[0];
	for(int i=0; i<n; i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	
	int minn=min;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			minn=arr[i];
			break;
		}
	}
		
	for(int i=0; i<n; i++){
		if(minn>arr[i] && arr[i]>0){
			minn=arr[i];
			}
		}printf("so duong be nhat cua mang la:%d",minn);
	}

