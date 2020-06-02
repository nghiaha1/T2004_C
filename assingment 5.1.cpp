#include <stdio.h>
int main(){
	int a,b,sum=0;
	do{
		printf("a=");
		scanf("%d",&a);
		printf("b=");
		scanf("%d",&b);
		if(a>b){
			printf("nhap lai a<b.\n");
		}
	}while(a>b);
	for(int i=a; i<=b; i++){
		sum+=i;
	}printf("tong cac so tu a den b = %d",sum);
}
