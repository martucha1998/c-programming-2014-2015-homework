#include<stdio.h>
int magic( int sq[] , int size )
{
	int i,i2,sum,sum2;
	i2=size;
	for(i2=0;i2<size;i2++)
	{
		sum2=sum;sum=0;
		for(i=0;i<size;i++) sum+=sq[i+i2*size];
		if(i2>0 && sum!=sum2) return 0;
	}
	
	for(i=0;i<size;i++)
	{
		sum2=sum;sum=0;
		for(i2=0;i2<size;i2++) sum+=sq[i+i2*size];
		if(sum!=sum2) return 0;
	}

	sum2=sum;sum=0;
	for(i=0;i<size;i++)
	{
		sum+=sq[i+i*size];
	}
	if(sum!=sum2) return 0;

	sum2=sum;sum=0;
	for(i=0;i<size;i++)
	{
		i2=size-i-1;
		sum+=sq[i+i2*size];
	}
	if(sum!=sum2) return 0;

	return 1;
}

int main()
{
	int size,i,i2;
	do { scanf("%d",&size); }while(size<1||size>999);
	int sq[size*size];
	for(i2=size-1;i2>=0;i2--)
	{
		for(i=0;i<size;i++)
		{
			scanf("%d",&sq[i+i2*size]);
		}
	}
	if(magic(sq,size)) printf("MAGIC");
	else printf("NO MAGIC");
	return 0;
}
