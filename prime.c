#include<stdio.h>
void main()
{
int n,i,c;
scanf("%d",&n);
for(c=2;c<=n-1;c++)
{
if(n%c==0)
{
prinntf("%d is not a prime",n);
}
}
if(c==n)
{
prinntf("%d is a prime",n);
}
}
