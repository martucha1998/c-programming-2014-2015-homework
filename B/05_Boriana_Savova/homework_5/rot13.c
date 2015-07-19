#include <stdio.h> 

int decypher(char txt1[1000]);

int cypher(char txt2[1000]);

int main(){
char choose;

do{
char text[1000];
printf("Enter option:");
scanf("%c",&choose);
getchar();
if(choose=='c'){
	printf("Enter text:");
	scanf("%1000s", text);
	cypher(text);
	getchar();
}
if(choose=='d'){
	printf("Enter text:");
	scanf("%1000s", text);
	decypher(text);
	getchar();
}

}while(choose!='q');
return 0;
}
int decypher(char txt1[1000]){
int i;
	for (i=0;txt1[i]!='\0';i++) {
		if(txt1[i]<'M'){
			txt1[i]= txt1[i]+13;	
		}else{
			txt1[i]= txt1[i]-13;	
		}	
	}
printf("Result:%s",txt1);
getchar();
}

int cypher(char txt2[1000]){
int j;
	for (j=0;txt2[j]!='\0';j++) {
		if(txt2[j]<'M'){
			txt2[j]= txt2[j]+13;	
		}else{
			txt2[j]= txt2[j]-13;	
		}
	}
printf("Result:%s",txt2);
getchar();
}	



