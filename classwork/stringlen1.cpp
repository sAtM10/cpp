#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    char sn[20];
	cout<<"enter name "<<endl;
	gets(sn);
	int l = strlen(sn);
	if(sn[l-1]=='n')
	{
		cout<<"the name is"<<sn<<endl;
	}
}