#include <iostream>
using namespace std;
//greatest number using module//
void grt()
{
	int a,b,c;

	cout<<"Enter 3 Number ";
	cin>>a>>b>>c;

	if(a>b && a>c)
	{
		cout<<"a is grt"<<endl;
	}
	else if (b>c)
	{
		cout<<"b is grt"<<endl;
	}
	else
	{
		cout<<"c is grt"<<endl;
	}
}


int main()
{
	grt();

return 0;
}
