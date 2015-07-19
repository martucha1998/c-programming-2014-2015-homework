#include<stdio.h>

void rod13(char b[200]){
char arrr[200];
int i;
for( i=0;b[i]!='\0';i++){
	if (b[i]>90){
		if ((arrr[i]=b[i]+13)>122){
		arrr[i]=b[i]+13-26;
		}
		else
		arrr[i]=b[i]+13;

		}
	};
	
		if((arrr[i]=b[i]+13)<90){
		arrr[i]=b[i]+13-26;
		}
		else
		{
		arrr[i]=b[i]+13;
		};
		arrr[i]='\0';
	printf("text:%s\n",arrr);
	
}




int main(){

char d,t[200];
while(d!='q'){
scanf("%c",&d);
if(d=='c'){
scanf("%s",t);
rod13(t);
}
else
if(d=='d'){
scanf("%s",t);
rod13(t);
}
}
return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 55ac69ace3dc0ee95f55a252523f50e76fceaabe
