#include <stdio.h>
#include <string.h>

/*void NumberCharater(char s[]){
	int e=0,u=0,o=0,a=0,i=0,rest=0;
	int n = strlen(s);
	for(int j=0; j<n; j++){
		if(s[j] == 'e'){
			e++;
		}
		if(s[j] == 'u'){
			u++;
		}
		if(s[j] == 'o'){
			o++;
		}
		if(s[j] == 'a'){
			a++;
		}
		if(s[j] == 'i'){
			i++;
		}rest = n - e++ - u++ - o++ - a++ - i++;
	}
	printf("a: %d; e: %d; i: %d; o: %d; u: %d; rest: %d", &a, &e, &i, &o, &u,&rest);
}*/


int main(){
	char s[100];
	printf("nhap chuoi ki tu: ");
	scanf("%s",&s);
	printf("Number of characters:\n");
	
	int e=0,u=0,o=0,a=0,i=0,rest=0;
	int n = strlen(s);
	for(int j=0; j<n; j++){
		if(s[j] == 'e'){
			e++;
		}
		if(s[j] == 'u'){
			u++;
		}
		if(s[j] == 'o'){
			o++;
		}
		if(s[j] == 'a'){
			a++;
		}
		if(s[j] == 'i'){
			i++;
		}rest = n - e++ - u++ - o++ - a++ - i++;
	}
	printf("a: %d; e: %d; i: %d; o: %d; u: %d; rest: %d", a, e, i, o, u, rest);
}
