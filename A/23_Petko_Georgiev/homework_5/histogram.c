#include<stdio.h>
int main()
{
	int N,l,i,nothing;
	printf("Enter range: ");  scanf("%d",&N);
	printf("Enter length: "); scanf("%d",&l);
	int arr[N+1];
	printf("Enter array: ");
	for(i=0;i<N+1;i++) arr[i]=0;
	for(i=0;i<l;i++)
	{
		scanf("%d",&nothing);
		arr[nothing]++;
	}
	printf("Histogram:\n");
	for(i=0;i<N+1;i++) printf("%d: %d\n",i,arr[i]);
	return 0;
}
