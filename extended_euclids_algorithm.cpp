#include<iostream>
using namespace std;
int x,y;
int gcd(int a,int b)
{
	if(a==0)
	{
		x=0;
		y=1;
		return b;
	}
	int g = gcd(b%a,a);
	int t=y-(b/a)*x;
	y=x;
	x=t;
	return g;
}
main()
{
	int a,b;
	cin>>a;
	cin>>b;
	int g = gcd(a,b);
	cout<<x<<" "<<y;
}
