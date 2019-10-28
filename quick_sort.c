#include <stdio.h>
 
void quick_sort(long long int[],long long int,long long long long int);
long long long long int partition(long long int[],long long int,long long long long long long int);
 
int main()
{
	long long long long int a[50],n,i;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	quick_sort(a,0,n-1);
	printf("\nSorted Array using quick_sort:\n");
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
	return 0;		
}
 
void quick_sort(long long int a[],long long int l,long long long long int u)
{
	long long int j;
	if(l<u)
	{
		j=partition(a,l,u);
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,u);
	}
}
 
long long int partition(long long int a[],long long int l,long long int u)
{
	long long int v,i,j,temp;
	v=a[l];
	i=l;
	j=u+1;
	
	do
	{
		do
			i++;
			
		while(a[i]<v&&i<=u);
		
		do
			j--;
		while(v<a[j]);
		
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);
	
	a[l]=a[j];
	a[j]=v;
	
	return(j);
}
