#include <iostream>
using namespace std;

int main()
{
	int n,a,s=0,r,m;
	cout<<"enter number";
	cin>>n;
	m = n;
	while(n>0)
	{
		r = n%10;
	    for(int i; i=r )
		{
			a=i*i*i;
		}
		s=s+a;
		n=n/10;
	}
	if(m==s)
	{
		cout<<"number is armstrong";
	}
	else
	{
		cout<<"no. is not armstrong";
	}
}