#include<stdio.h>
int main(){
	char string[100];
	printf("please enter string characters\n");
	fgets(string,100,stdin);
	int leght=strlen(string);
	printf("string of leght is:%d\n",leght);
	for(int i =leght;i>=0;i--){
		printf("%c",string[i]);
	} 
	return 0;
}
