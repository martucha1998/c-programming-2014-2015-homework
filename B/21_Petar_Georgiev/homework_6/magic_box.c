#include <stdio.h>
int main(){
	int size,y,x,magic;
    	printf("size:");
   	scanf("%d", &size);
	int arr[size+1][size+1];
	arr[size+1][size]=0;
	for(y=0;y<size;y++){
		for(x=0;x<size;x++){
			scanf("%d",&arr[y][x]);
		}
	}
	//y
	for(y=0;y<size;y++){
		arr[y][size]=0;
		for(x=0;x<size;x++){
			arr[y][size]=arr[y][size]+arr[y][x];
		}
		if (arr[0][size]!=arr[y][size]){magic=1;}
	}//

	//x
	for(x=0;x<size;x++){
		arr[size][x]=0;
		for(y=0;y<size;y++){
			arr[size][x]=arr[size][x]+arr[y][x];
		}
		if (arr[0][size]!=arr[size][x]){magic=1;}
	}//

	//diagonal
	arr[size][size]=0;
	for(x=0;x<size;x++){
		arr[size][size]=arr[size][size]+arr[x][x];
	}
	if (arr[0][size]!=arr[size][size]){magic=1;}
	//

	//diagonal reversed
	x=size;
	for(y=0;y<size;y++){
		x=x-1;
		arr[size+1][size]=arr[size+1][size]+arr[y][x];
	}
	if (arr[0][size]!=arr[size+1][size]){magic=1;}
	//
	
	for(y=0;y<size;y++){
		for(x=0;x<size;x++){
			printf("%d ",arr[y][x]);
		}
		printf("\n");
	}
	if ((magic==1)||(arr[0][size]!=size*(size*size+1)/2)){printf("NO MAGIC \n");
	}else{printf("MAGIC \n");}
}
