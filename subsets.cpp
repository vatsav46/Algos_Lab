#include<iostream>
#include<cmath>
using namespace std;
int ps[100][100];
int bin(int x)
{
	int i=0,s=0;
	while(x!=0)
	{
		int k=x%2;
		x=x/2;
		s=s+k*pow(10,i);
		i++;
	}
	return s;
}
int nod(int x)
{
	int c=0;
	while(x!=0)
	{
		x=x/10;
		c++;
	}
	return c;
}
void powerSet(int a[],int n)
{
	for(int i=0;i<pow(2,n);i++)
	{
		int b=bin(i);
		int m=nod(b);
		for(int j=0;j<n-m;j++)
			ps[i][j]=0;
		for(int j=n-1;j>=n-m;j--)
		{
			ps[i][j]=b%10;
			b=b/10;
		}
	}
}
main()
{
	int a[10],n,s=0,k,m=0,c;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	powerSet(a,n);
	for(int i=0;i<pow(2,n);i++)
	{
		s=0;
		c=0;
		for(int j=0;j<n;j++)
		{
			if(ps[i][j]==1)
			{
				s+=a[j];
				c++;
			}
		}
		if(s==k&&c>m)
		{
			m=c;
		}
	}
	cout<<m;
}
