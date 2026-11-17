#include<stdio.h>
int main()
{
	int i=1;
	int n=10;
	int ret=1;
	int sum=0;
	for(i=1;i<n;i++)
	{
			ret=ret*i;
			sum=sum+ret;
	}
	printf("%d\n",sum);

	
	
	
	return 0;
}
