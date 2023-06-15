#include <iostream>
using namespace std;

int main()
{
    int s=0,n;
	cout<<"enter number"<<endl;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(n==s)
	{
		cout<<"the no. is perfect";
	}
	else
	{
		cout<<"no. is not perfect";
	}
}