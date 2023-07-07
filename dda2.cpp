#include <iostream>
using namespace std;
//sum of middle row in a matrix using DDA//
int main()
{
    int n[3][4],r,c,s = 0;
	for( r=0 ; r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			cout<<"enter number"<<endl;
			cin>>n[r][c];
		}
	}
	cout<<endl;
	for( r=0 ; r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			cout<<n[r][c]<<"\t";
		}
	cout<<endl;
	}
	for(c=0;c<4;c++)
	{
		s = s+n[1][c];
	}
	cout<<"sum of mid row is"<<s<<endl;
}