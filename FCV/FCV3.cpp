#include <iostream>
using namespace std;
//input name of book code quantity rate per book calc total amt,discount 10% and net price//
int total(int x,int y)
{
	return (x*y);
}

int dis(float x)
{
	return ((x*10)/100);
}

int net(float x,float y)
{
	
	return (x-y);

}

int main()
{
	char bn[20];
	int bc,q;
	float rpb;

	cout<<"Enter book name,code,quantity,rate per book "<<endl;
	cin>>bn>>bc>>q>>rpb; 						

	float t=total(q,rpb); 				  
	float d=dis(t);
	float np=net(t,d);

	cout<<"total is"<<t<<endl;
	cout<<"discount  is"<<d<<endl; 
	cout<<"net price is"<<np<<endl;       
	
return 0;
}