#include <stdio.h>
int main(){
	int a,b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	
	int a2=a, b2=b;
	if(a<0) a2 = -a;
	if(b<0) b2 = -b;
	if(a==0) printf("UCLN cua a va b la %d\n",b2);
	else if(b==0) printf("UCLN cua a va b la %d\n",a2);
	
	for(int i=a; i>0; i--){
		if(a%i==0 && b%i==0){
			printf("UCLN cua a va b la %d",i);
			break;
		}
	}
}
