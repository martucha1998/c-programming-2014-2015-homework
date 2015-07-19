#include <stdio.h>
int size, square[999][999], magic=0, total1, total, makingtotal1=0;

int check_rows(int rownumber){
	total=0;
	int x=0;
	for(x; x<size; x++){
		total=total+square[x][rownumber];
	}
	if(makingtotal1==0){
		total1=total;
		makingtotal1++;	
	}else{
		if( total != total1){
			magic++;
		}	
	}
	
}

int check_columns( int columnnumber){
	total=0;
	int y=0;
	for(y=0; y<size; y++){
		total=total+square[columnnumber][y];
	}

	if( total != total1){
		magic++;
	}	
}

int check_both_diagonals(){

}


int main(){
	int i, j;
	scanf("%d", &size);
	for( i=0; i<size; i++ ){
		for(j=0; j<size; j++){
			scanf("%d", &square[i][j]);
		}
	}


	for(i=0; i<size; i++){
		if(magic==0){
			check_rows(i);
		}
		if(magic==0){
			check_columns(i);
		}	
	
	}
		if(magic==0){
			check_both_diagonals;
		}
		if(magic==0){
			printf("MAGIC");
		}else{
			printf("NO MAGIC");
		}
		
	return 0;
}
