#include<stdio.h>
int main(){
	int count=0;
	int n;
	char string[100];
	printf("please enter string characters\n");
	fgets(string,100,stdin);
	fflush(stdin);
	printf("please enter quatity characters\n");
	scanf("%d",&n);
	int lenght=strlen(string);
	if(n == lenght-1){
		printf("TRUE");
	}else{
		printf("FLASE");
	}
	return 0;
}
