#include<stdio.h>
int main()
{
	int rem,rev,n=0;

	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);
}

