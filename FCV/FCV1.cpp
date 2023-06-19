#include <iostream>
using namespace std;
//finding square , cube , factorial using Function called by variable (FCV)//
int sqr(int x)
{
	int z;
	z=x*x;
	return (z);
}

int cube(int x)
{

	int z;
	z=x*x*x;
	return (z);
}

int fact(int x)
{
	int f=1;

	for(int i=x;i>=1;i--)
	{
		f=f*i;
	}

	return (f);

}

int main()
{
	
	int n,s,c,fa;

	cout<<"Enter Number ";
	cin>>n; 						// Input

	s=sqr(n); 						// n = actual argument
	c=cube(n);
	fa=fact(n);

	cout<<"Square is"<<s<<endl;
	cout<<"Cube is"<<c<<endl; 		// Output
	cout<<"Fact is"<<fa<<endl;



return 0;
}