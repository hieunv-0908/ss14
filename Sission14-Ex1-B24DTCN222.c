#include<stdio.h>
int main(){
	char string[100];
	printf("please enter string characters\n");
	fgets(string,100,stdin);
	printf("string characters your is:%s",string);
	int leght=strlen(string);
	printf("string of leght is:%d",leght);
	return 0;
}
