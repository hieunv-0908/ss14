#include<stdio.h>
int main(){
	int count=0;
	char n;
	char string[100];
	printf("please enter string characters\n");
	fgets(string,100,stdin);
	printf("please enter any characters ");
	scanf("%c",&n);
	int leght=strlen(string);
	for(int i=0;i<leght;i++){
		if(string[i] == n){
			count++;
		}
	}
	if (count ==0){
		return 1;
	}
	printf("characters (%c) apper %d times\n",n,count);
	printf("string of leght is:%d\n",leght);
	return 0;
}
