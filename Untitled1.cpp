#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("nhap so thu hai:\n");
	scanf("%d",&b);
	printf("nhap so thu ba:\n");
	scanf("%d",&c);
	
	for(;a+b<=c || a+c<=b || b+c<=a && a>0 && b>0 && c>0;){
		printf("3 so khong phai la canh tam giac, nhap lai:\n");
			printf("nhap so thu nhat:\n");
			scanf("%d",&a);
			printf("nhap so thu hai:\n");
			scanf("%d",&b);
			printf("nhap so thu ba:\n");
			scanf("%d",&c);
	}
	printf("day la 3 canh tam giac");
	
}
