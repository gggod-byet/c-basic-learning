#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	char arr1[]="Welcome to my world";
	char arr2[]="###################";
	int left=0;
	int right=strlen(arr1)-1;
	while(left<=right)
	{
	  arr2[right]=arr1[right];
	  arr2[left]=arr1[left];
	  printf("%s\n",arr2);
	  Sleep(1000);
	  left++;
	  right--;
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
