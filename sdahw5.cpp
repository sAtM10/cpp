#include <iostream>
using namespace std;

int main()
{
    char sn[20][5];
	int cl[5],rl[5];
	for(int i = 0;i<5;i++)
	{
		cout<<"enter student name,class,rollno."<<endl;
		cin>>sn[i]>>cl[i]>>rl[i];
	}
	for(int i = 0;i<5;i++)
	{
		cout<<sn[i]<<"\t"<<cl[i]<<"\t"<<rl[i]<<endl;
	}
}