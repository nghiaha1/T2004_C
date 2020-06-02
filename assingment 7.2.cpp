#include <stdio.h>
int main(){
	int a[4][3], b[4][3], c[4][3],d[4][3];
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			c[i][j] = a[i][j] + b[i][j];
			d[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("tong 2 ma tran = \n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
	printf("hieu 2 ma tran = \n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("%d",d[i][j]);
		}
		printf("\n");
	}
}
	
