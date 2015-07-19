#include<stdio.h>

void rot13(char arr[1000]){
	int i;
	for(i=0;arr[i] !='0';i++){
		char ch=arr[i];
		if(ch>='a'&&ch<='z'){
			int number=ch - 'a';
			int n=13;
			number=(number+n)%26;
			arr[i]='a'+number;
		}
		else if(ch>='A'&&ch<='Z'){
		int number=ch - 'A';
		int n=13;
		number=(number+n)%26;
		arr[i]='A'+number;
		}
	}
	printf("%s\n",arr);



}


void code(char c[1000]){
	while(scanf("%1000s",c)){
	rot13(c);
	}

}



void decode(char dc[1000]){
	while(scanf("%1000s", dc)){
		rot13(dc);
	}


}



int main(){
	char w, mas[1000];
	printf("Type c for code and d for decode press enter and then add the text\n");
	scanf("%c", &w);
	while(w=='c'){
		code(mas);
	}
	while(w=='d'){
		decode(mas);
	}
	
	return 0;
}
