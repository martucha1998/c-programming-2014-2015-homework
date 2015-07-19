#include<stdio.h>

int shifer(char code[100]){
   int len,i;
	len = 0;
     getchar();
    do{
     scanf("%c",&code[len]);
     len++;
    }	
     while(code[len - 1] != 10);

	for(i = 0; i < len; i++){
		if((code[i] >= 'a' && code[i] <= 'm')||(code[i] >= 'A' && code[i] <= 'M')){
		 code[i] = code[i] + 13;
		}
		else if((code[i] > 'm' && code[i] <= 'z')||(code[i] >= 'm' && code[i] <= 'Z')){
		 code[i] = code[i] - 13;
		}
		printf("%c", code[i]);
	}
 return 0;
}
int dshifer(char dcode[100]){
   int dlen,di;
	dlen = 0;
     getchar();
    do{
     scanf("%c",&dcode[dlen]);
     dlen++;
    }	
     while(dcode[dlen - 1] != 10);

	for(di = 0; di < dlen; di++){
		if((dcode[di] >= 'a' && dcode[di] <= 'm')||(dcode[di] >= 'A' && dcode[di] <= 'M')){
		 dcode[di] = dcode[di] + 13;
		}
		else if((dcode[di] > 'm' && dcode[di] <= 'z')||(dcode[di] >= 'm' && dcode[di] <= 'Z')){
		 dcode[di] = dcode[di] - 13;
		}
		printf("%c", dcode[di]);
	}
 return 0;
}
int main(){
  char text[100];
  char op;
  while(op != 'q'){
	printf("Enter option: ");
	scanf("%c", &op);
	 switch(op){
		case 'c': shifer(text);
			break;
		case 'd': dshifer(text);
 			break;
   	}
 }
 return 0;
}
