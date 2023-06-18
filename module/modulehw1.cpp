#include <iostream>
using namespace std;
//square cube factorial using module//
void sqr()
{
	int a; 						

	cout<<"Enter any Number"; 				// Input
	cin>>a;

	int s=a*a; 								// Processing

	cout<<"Square is "<<s<<endl;			// Output
}

void cube()
{
	int a; 						

	cout<<"Enter any Number"; 					// Input
	cin>>a;

	int c=a*a*a; 								// Processing

	cout<<"Cube is "<<c<<endl;					// Output
}


void fact()
{
	int n,i,f=1;

	cout<<"Enter Number ";
	cin>>n;

	for ( i=n ; i>=1 ; i--)
	{
			f=f*i;
	}

	cout<<"factorial is "<<f<<endl;
}



int main()
{
	sqr();
	cube();
	fact();

return 0;
}
