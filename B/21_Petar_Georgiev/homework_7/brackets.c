#include <stdio.h>
#include <string.h>

int main(){
	int a,b,number[2],valid;
	number[0]=0;
	number[0]=0;
	number[0]=0;
	char string[250];
	int vector[125],vector_start[125],vector_end[125];
	for (a=0;a<126;a++){
		vector[125]=0;
		vector_start[125]=0;
		vector_end[125]=0;
	}
	scanf("%s",string);
	valid=1;
	for (a=0;a<strlen(string);a++){
		if (string[a]=='{' || string[a]=='}'){number[0]++;}
		if (string[a]=='(' || string[a]==')'){number[1]++;}
		if (string[a]=='<' || string[a]=='>'){number[2]++;}
	}
	if ((number[0] % 2==0) && (number[1] % 2==0) && (number[2] % 2==0)){
		for (a=0;a<strlen(string);a++){
			for (b=strlen(string);b>0;b--){
				if ((string[a]=='(' && string[b]==')') || (string[a]=='{' && string[b]=='}') || (string[a]=='[' && 					string[b]==']')){
					vector[a]=b-a;
					vector_end[b]=b;
					vector_start[a]=a;
					valid=1;
				}
			}
		}
	}
	if (valid!=1){printf("NOT VALID"); return 0;}
	for (a=0;vector[a]!=0 && vector[a+1]!=0 && a<126;a++){
		if ((vector[a+1]<vector[a]) && (vector_end[a+1]<vector_end[a])){
			if (vector_start[a]<vector_start[a+1] && vector_end[a]>vector_end[a+1]){valid=1;}
			else{printf("NOT VALID"); return 0;}
		}
		else{
			if (vector_start[a+1]<vector_start[a] && vector_end[a+1]>vector_end[a]){valid=1;}
			else{printf("NOT VALID"); return 0;}
		}
	}
	printf("VALID");
	return 0;
}
