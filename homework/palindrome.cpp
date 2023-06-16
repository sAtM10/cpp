

#include <iostream>
using namespace std;

int main()
{
	int n,m,s=0,r;
	cout<<"enter number"<<endl;
	cin>>n;
	m=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	cout<<"the number is"<<s<<endl;
	if(m==s)
	{
		cout<<"the number is palindrome"<<endl;
	}
	else
	{
		cout<<"the number is not palindrome"<<endl;
	}
}