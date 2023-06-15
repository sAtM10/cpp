#include <iostream>
using namespace std;

int main()
{
	int n,m,s=0,r;
	cout<<"enter any number"<<endl;
	cin>>n;
	while(n>0)
	{
		r = n%10;
		s=s*10+r;
		n=n/10;
	}
	cout<<"reverse no is"<<s;
}