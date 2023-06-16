#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    char en[20],ed[20];
	int ec;
	float es;
	cout<<"enter employee name,department,code,salary"<<endl;
	cin>>en>>ed>>ec>>es;
	if(strcmp(en,"tarun")==0)
	if(strcmp(ed,"computer")==0)
	if(ec==101||ec==102||ec==103)
	{
		float bn = (es*5)/100;
		float tp = es+bn;
		cout<<"the total pay is"<<tp<<endl;
	}
	else
	{
		cout<<"the employee code is wrong";
	}
	else
	{
		cout<<"the department is wrong";
	}
	else
	{
		cout<<"the employee name is wrong";
	}
}