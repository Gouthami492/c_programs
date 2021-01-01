//An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
#include <stdio.h>
void swap(int* arr,int a ,int b)
{
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int main() {
    
	int arr[100],n,i,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(arr[i]<0)
	    {
	        if(i!=j)
	        swap(arr,i,j);
	        j++;
	    }    
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	
}
