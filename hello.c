#include<stdio.h>

void main(){
	char a[20] = "Indresh1312321";
	char c[20];
	printf("Enter the key:");
	scanf("%s", &c);
	if(strcmp(a,c) == 0) {
		printf("Succes \n");
	} else {
		printf("Opps!!! \n");
	}
}

