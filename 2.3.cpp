#include <stdio.h>
int main() {
	int x1,x2,x3;
	printf("nhap vao 3 so can kiem tra:\n");
	printf("so thu nhat:\n");
	scanf("%d",&x1);
	printf("so thu hai:\n");
	scanf("%d",&x2);
	printf("so thu ba:\n");
	scanf("%d",&x3);
	if(x1<x2){
		printf("%d la so be nhat",x1);
	}else{
		if(x2<x3) {
			printf("%d la so be nhat",x2);
		}else{
			printf("%d la so be nhat",x3); 
		}
}
}
