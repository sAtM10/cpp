#include <iostream>
using namespace std;

int main()
{
    int i,n;
	i = 1;
	while(i<=12)
	{
		cout<<"enter number"<<endl;
		cin>>n;
		if (n%2 == 0)
		{
			cout<<"the number is even"<<n<<endl;
		}
		i=i+1;
	}
}