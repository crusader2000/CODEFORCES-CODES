#include<stdio.h>
void merge(int arr[],int  l, int  m, int  r) 
{ 
	int  i, j, k; 
	int  n1 = m - l + 1; 
	int  n2 = r - m; 
	int  L[n1], R[n2]; 
	for (i = 0; i < n1; i++) 
	{
		L[i]= arr[l + i]; 
	}
	for (j = 0; j < n2; j++) 
	{
		R[j] = arr[m + 1+ j]; 
	}
	i = 0;
	j = 0; 
	k = l;
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k]= R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		arr[k]= L[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
}
void mergeSort(int arr[],int  l, int  r) 
{ 
	if (l < r) 
	{ 
		int  m = l+(r-l)/2; 
		mergeSort(arr,l, m); 
		mergeSort(arr,m+1, r); 
		merge(arr,l,m,r);
	}
}
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[100005];
	for( int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	mergeSort(arr,0,n-1);
	int i,temp=1,min=arr[0];
	printf("%d\n",arr[0]);
	for(i=1;i<n && temp<k;i++)
	{
		if(arr[i]!=arr[i-1])
		{
			printf("%d\n",arr[i]-min);
			temp++;
			min=arr[i];
		}
	}
	while(temp<k)
	{	printf("0\n");temp++;}
}
