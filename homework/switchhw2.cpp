#include <iostream>
using namespace std;

int main()
{
    int a,s,c,f;
	int ans=0,ch;
	do
	{
		cout<<"enter number"<<endl;
		cin>>a;
		cout<<"1:square"<<endl;
		cout<<"2:cube"<<endl;
		cout<<"3:factorial"<<endl;
		cout<<"4:exit"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				s=a*a;
				cout<<"the square is"<<s<<endl;
				break;
			}
			case 2:
			{
				c=a*a*a;
				cout<<"the cube is "<<c<<endl;
				break;
			}
			case 3:
			{
				f=1;
				for(int i=a;i>=1;i--)
				{
					f=f*i;
				}
				cout<<"the factorial is"<<f<<endl;
				break;
			}
			case 4:
			{
				break;
			}
			default:
			{
				cout<<"choice is not valid";
				break;
			}
			cout<<"continue our program yes-0 , no-1"<<endl;
			cin>>ans;
		}
		
	}while(ans==0);			
}