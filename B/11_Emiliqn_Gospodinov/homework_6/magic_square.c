#include <stdio.h>

int magic(int s[999][999],int length){
	int i,j,sum=0,row=0,sbor_dia1=0,sbor_dia2=0;
	for(i=0;i<length;i++){
		sum=sum + s[0][i];
	}
	for(i=1;i<length;i++){
		for(j=0;j<length;j++){
			row=row + s[i][j];
		}
		if(sum!=row){
			return 0;
		}
	row=0;
	}
	for(i=1;i<length;i++){
		for(j=0;j<length;j++){
			row=row + s[j][i];
		}
		if(sum!=row){
			return 0;
		}
	row=0;
	}
	j=0;
	i=0;
	for(i=0;i<length;i++){
		for(j=0;j<length;j++){
			if(j==i){
				sbor_dia1=sbor_dia1+s[i][j];
				j++;
				i++;
	}
		}
		if(sum!=sbor_dia1){
			return 0;
		}
	}
	for(i = 0; i < length; ++i){
		for(j = 0; j < length; ++j){
			if(i == j){
			sbor_dia2=sbor_dia2 + s[j][i];
			}
		}
	}
	
		if(sbor_dia2 != sum){
			return 0;

	}
	return 1;
}



int main(){
	int square[999][999];
	int length;
	int counter,v2,m;
	scanf("%d", &length);
	while(length>=1000){
		printf("<1000 baluk\n");
		scanf("%d", &length);
	}
	for(counter=0;counter<length;counter++){
		for(v2=0;v2<length;v2++){
			scanf("%d", &square[counter][v2]);
		}

	}
    	m=magic(square,length);
	if(m){
		printf("MAGIC\n");
	}else{
		printf("NO MAGIC\n");
	}
	return 0;

}
