#include<stdio.h>

int main()
{
	long long int A, B, sum=0;
	scanf("%lld %lld",&A, &B);
	sum=(B*(B+1)-A*(A-1))/2;	
	printf("%lld\n", sum);

	return 0;
}