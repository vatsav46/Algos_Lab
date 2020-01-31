#include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
	int i=low-1;
	int pivot=a[high];
	for(int j=low;j<high;j++)
	{
		if(a[j]<=pivot)
		{
			swap(a[j],a[++i]);
		}
	}
	swap(a[i+1],a[high]);
	return i+1;
}
void quicksort(int a[],int low,int high)
{
	while(low<high)
	{
		int p=partition(a,low,high);
		quicksort(a,low,p-1);
		low=p+1;
	}
}
main()
{
	int n,a[100],i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
