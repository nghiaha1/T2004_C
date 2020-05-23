#include <stdio.h>
int main(){
	int arr[4][4], sum1=0, sum2=0;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("ary[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(i==j){
				sum1 += arr[i][j];
			}
			if(i+j==3){
				sum2 += arr[i][j];
			}
		}
	}
	printf("TBC duong cheo 1 la %f", (float)sum1/4);
	printf("TBC duong cheo 2 la %f", (float)sum2/4);
}
