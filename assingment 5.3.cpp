#include <stdio.h>
int main(){
	int n,sum=0;
	do{
		printf("n=");
		scanf("%d",&n);
		if(n<=0){
			printf("nhap lai n>0\n");
		}
	}while(n<=0);
	
	for(int i=n; i!=0; i/=10){
		sum+=i%10;
	}
	printf("tong chu so cua %d la %d",n,sum);
}
