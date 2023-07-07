#include <iostream>
using namespace std;
//store any 12 number , find sum of even digits DDA(double dimensional array)//
int main()
{
    int n[4][3],s = 0;
	for(int i = 0;i<4;i++)
	{
		for(int j = 0;j<3;j++)
		{
			cout<<"enter number"<<endl;
			cin>>n[i][j];
		}
	}
	for(int i = 0;i<4;i++)
	{
		for(int j = 0;j<3;j++)
		{
			if(n[i][j]%2 == 0)
			{
				s = s+n[i][j];
			}
		}
	}
	cout<<"the sum is"<<s<<endl;
}