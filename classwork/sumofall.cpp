#include <iostream>
using namespace std;

int main()
{
   int n,m,s=0,r;
   cout<<"enter number"<<endl;
   cin>>n;
   while(n>0)
   {
	   r=n%10;
	   s=s+r;
	   n=n/10;
   }
   cout<<"the sum is"<<s;
}