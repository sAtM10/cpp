#include <iostream>
using namespace std;
//find sum multiplication avg using module//
void sum()
{
	int a,b,s;
	cout<<"enter two number "<<endl;
	cin>>a>>b;
	s = a+b;
	cout<<"the sum is"<<s<<endl;
}
void mul()
{
	int a,b,m;
	cout<<"enter number"<<endl;
	cin>>a>>b;
	m = a*b;
	cout<<"multiplicAtion  is"<<m<<endl;
}
void avg()
{
	int a,b;
	cout<<"enter 2 number"<<endl;
	cin>>a>>b;
	float av = (a+b)/2.0;
	cout<<"avg is"<<av<<endl;
}
int main()
{
	sum();
	mul();
	avg();
}

