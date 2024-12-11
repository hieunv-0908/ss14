#include<stdio.h>
void counstring(char string[]){
	 int count =0;
	 for(int i =0;string[i]!='\0';i++){
	 	if(string[i] == ' '){
	 		count++;
		 }
	 }
	 printf("%d",count+1);
}
int main(){
	char string[100];
	printf("please enter any string ");
	fgets(string,100,stdin);
	counstring(string);
	return 0;
}
