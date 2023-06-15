#include <iostream>
using namespace std;

int main()
{
	int a;
    cout << "enter number"<<endl;
	cin>>a;
	if(a%10==5)
	{
		cout<<"the last digit of number is 5";
	}
	else
	{
		cout<<"the last digit is not 5";
	}
	return 0;
}