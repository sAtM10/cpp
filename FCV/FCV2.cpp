#include <iostream>
using namespace std;
//2 no input find sum mul avg//
int sum(int x,int y)
{
	return (x+y);
}

int mul(int x,int y)
{
	return (x*y);
}

int avg(int x,int y)
{
	
	return ((x+y)/2.0);

}

int main()
{
	
	int a,b,s,m;
	float av;

	cout<<"Enter Number ";
	cin>>a>>b; 						// Input

	s=sum(a,b); 				   // a,b = actual argument
	m=mul(a,b);
	av=avg(a,b);

	cout<<"Sum is"<<s<<endl;
	cout<<"mul is"<<m<<endl; 
	cout<<"avg is"<<av<<endl;       // Output
	



return 0;
}