#include <iostream>
using namespace std;
//sum of odd digits using single dimensional array//
int main()
{
  int n[12],i,s = 0;
  for(i=0;i<12;i++)
  {
	  cout<<"enter number"<<endl;
	  cin>>n[i];
  }
  for(i=0;i<12;i++)
  {
	  if(n[i]%2!=0)
	  {
		  s = s+n[i];
	  }
	  cout<<"the sum is"<<s<<endl;
  }
}