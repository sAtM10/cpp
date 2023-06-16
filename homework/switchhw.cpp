#include <iostream>
using namespace std;

int main()
{
	int a,l,r,Ar,c,w,h,b;
	int ans = 0,ch;
	do
	{
		cout<<"1:area of rectangle"<<endl;
		cout<<"2:area of triangle"<<endl;
		cout<<"3:area of square"<<endl;
		cout<<"4:area of circle"<<endl;
		
		cout<<"enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				cout<<"enter length,width"<<endl;
				cin>>l>>w;
				Ar = l*w;
				cout<<"the area is"<<Ar<<endl;
				break;
			}
			case 2:
			{
				cout<<"enter height,base"<<endl;
				cin>>h>>b;
				Ar = (h*b)/2;
				cout<<"the area is"<<Ar<<endl;
				break;
			}
			case 3:
			{
				cout<<"enter value of side"<<endl;
				cin>>a;
				Ar = a*a;
				cout<<"the area is"<<endl;
				break;
			}
			case 4:
			{
				cout<<"enter radius"<<endl;
				cin>>r;
				Ar = 3.14*r*r;
				cout<<"the area is"<<Ar<<endl;
				break;
			}
			case 5:
			{
				break;
			}
			default:
			{
				cout<<"choice is not valid";
				break;
			}
		}
		cout<<"continue program yes - 0,no - 1"<<endl;
		cin>>ans;
	}
	while(ans==0);
}
				
