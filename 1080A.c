#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int ans=0;
	if((2*n)%k!=0)
		ans+=(((2*n)/k)+1);
	else
		ans+=((2*n)/k);
	if((5*n)%k!=0)
		ans+=(((5*n)/k)+1);
	else
		ans+=((5*n)/k);
	if((8*n)%k!=0)
		ans+=(((8*n)/k)+1);
	else
		ans+=((8*n)/k);
printf("%d\n",ans);
}
