#include<iostream>
int exp(int a,int n)
{
	if(n==1)
	{
		return a;
	}
	if(n%2==0)
	{
		return exp(a,n/2)*exp(a,n/2);
	}
	else
	{
		return a*exp(a,(n-1)/2)*exp(a,(n-1)/2);
	}
}
main()
{
	int a,n;
	std::cin>>a>>n;
	std::cout<<exp(a,n);
}
