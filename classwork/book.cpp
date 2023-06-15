#include <iostream>
using namespace std;

int main()
{
	char bn[20];
	int bc , q ;
	float rpb ;
	
    cout << "enter book name , code , quantity,rate per book"<<endl;
	cin>>bn>>bc>>q>>rpb;
	if(bc==1001 || bc == 1005 || bc==1009)
	if(q>=5 && q<=10)
	if(rpb>500)
	{
		float t = q*rpb;
		cout<<"the total amount is"<<t<<endl;
	}
	else
	{
		cout<<"the rate per book is not valid"<<endl;
	}
	else
	{
		cout<<"the quantity is not valid"<<endl;
	}
	else
	{
		cout<<"the book code is not valid"<<endl;
	}
}