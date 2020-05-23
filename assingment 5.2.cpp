#include <stdio.h>
int main(){
	int n;
	do{
		printf("n=");
		scanf("%d",&n);
		if(n<=0){
			printf("nhap lai n>0\n");
		}
	}while(n<=0);
	
	int n2=n, count=0;
	if(n2==0) count = 1;
	for( ; n2!=0; count++,n2/=10);
	printf("so chu so cua %d la %d",n,count);
}
