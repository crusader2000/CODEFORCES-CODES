#include<stdio.h>
int main(void)
{
long long int n,m,a;

scanf("%lld %lld %lld",&n,&m,&a);
if(n%a != 0)
{
n=n+(a-n%a);
}

if(m%a != 0)
{m=m+(a-m%a);}


printf("%lld",(n/a)*(m/a));
return 0;
}
