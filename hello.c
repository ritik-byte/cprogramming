#include<stdio.h>

void main(){
	char a[20] = "Indresh";
	char c[20];
	printf("Enter the key:");
	scanf("%s", &c);
	if(strcmp(a,c) == 0) {
		printf("Succes \n");
	} else {
		printf("Opps!!! \n");
	}
}

