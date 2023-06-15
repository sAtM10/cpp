#include <iostream>
using namespace std;

int main()
{
  int n,f,s=0,r,m;
  cout<<"enter number"<<endl;
  cin>>n;
  m=n;
  while(n>0)
  {
	  r=n%10;
	  f=1;
	  for(int i=r;i>=1;i--)
	  {
		  f=f*i;
	  }
	  s=s+f;
	  n=n/10;
  }
  if(m==s)
  {
  cout<<"no.is strong";
  }
  else
  {
	  cout<<"no is not strong";
  }
}