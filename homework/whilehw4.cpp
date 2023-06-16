#include <iostream>
using namespace std;

int main()
{
  int i,n,s=0,m=1;
  i=1;
  while(i<=12)
  {
	  cout<<"enter number"<<endl;
	  cin>>n;
	  if(n%2==0)
	  {
		  s=s+n;
	  }
	  else
	  {
		  m=m*n;
	  }
	  i=i+1;
  }
  cout<<"the sum of even digit is"<<s<<endl;
  cout<<"the multiplication of odd digit is"<<m<<endl;
}