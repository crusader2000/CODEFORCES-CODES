#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int L,v,r,l;
		scanf("%d %d %d %d",&L,&v,&l,&r);
		r=r-r%v;
		int ans=(-(r-l)/v)-1+(L)/v;
		if(ans>=0)
			printf("%d\n",ans);
		else
			printf("%d\n",0);
	}
/*	r-l/v+1=n
		L-1/v+1
		r+1=l-1
*/}
