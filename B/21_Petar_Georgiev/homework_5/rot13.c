#include <stdio.h>
#include <stdlib.h>
void cypher();

int main() {
char option;
char buf[100];
	printf("enter option:");
	scanf("%s",&option);
	while(option=='c' || option=='d'){
		while(scanf("%s", buf)) {
		cypher(buf);
		}
	}
	if(option=='q'){
	exit(0);
	}
return 0;
}

void cypher(char arr[100]) {
int i;
char ch;
	for(i = 0; arr[i]!= '\0'; ++i) {
	if ( arr[i]>=78 && arr[i]<=90 || arr[i]>=110 && arr[i]<=122){
	arr[i]=arr[i]-13;
	}
	else if( arr[i]<=77 && arr[i]>=65 || arr[i]<=109 && arr[i]>=97){
	arr[i]=arr[i]+13;
	}	
}
printf("%si ", arr);
}
