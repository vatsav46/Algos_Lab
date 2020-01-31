#include<iostream>
int binarySearch(int a[],int low,int high,int k)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==k)
		{
			return mid;
		}
		else if(a[mid]<k)
		{
			return binarySearch(a,mid+1,high,k);
		}
		else 
		{
			return binarySearch(a,low,mid-1,k);
		}
	}
	return -1;
}
main()
{
	int a[50],n,k;
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	std::cin>>k;
	std::cout<<binarySearch(a,0,n-1,k);
}
