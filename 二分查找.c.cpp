#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	int right=sz-1;
	int k=0;
	scanf("%d",&k);
	
	while(left<=right)
	{
		int mid=(right+left)/2;
		if(arr[mid]<k)
		left=mid+1;
		if(arr[mid]>k)
		right=mid-1;
		if(arr[mid]==k)
		{
			printf("找到啦下标是 %d\n",mid);
			break;
		}
		
		
	}
	if(left>right)
	printf("找不到\n");
	
	
	return 0;
}

