#include <iostream>
using namespace std;
//store 15 number in matrix form using DDA//
int main()
{
    int n[5][3];
	for(int r = 0 ;r<5;r++)
	{
		for(int c = 0;c<3;c++)
		{
			cout<<"enter number"<<endl;
			cin>>n[r][c];
		}
	}
	for(int r = 0 ;r<5;r++)
	{
		for(int c = 0;c<3;c++)
		{
			cout<<n[r][c]<<"\t";
		}
		cout<<endl;
	}
		
}