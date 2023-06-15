#include <iostream>
using namespace std;

int main()
{
	char sn[20];
	int sc;
	float ss,cm;
	char zn[100];
	
    cout << "enter salesman name"<<endl;
	cin>>sn;
	cout<<"enter code"<<endl;
	cin>>sc;
	cout<<"enter salary"<<endl;
	cin>>ss;
	cout<<"enter zone"<<endl;
	cin>>zn;
	
	if(ss<5000)
	{
		cm = (ss*25)/100;
	}
	else if(ss>=5000 && ss< 10000)
	{
		cm = (ss*20)/100;
	}
	else if(ss>=10000 && ss<20000)
	{ 
		cm = (ss*15)/100;
	}
	else if(ss>=20000 && ss<50000)
	{
		cm = (ss*10)/100;
	}
	else
    {
		cm = (ss*5)/100;
	}
	cout<<"the commision is"<<cm<<endl;
	float ts = ss+cm;
	cout<<"the total slary is"<<ts<<endl;
	
}