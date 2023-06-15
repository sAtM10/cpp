#include <iostream>
using namespace std;
//mode of array//
int main()
{
    int n[20],i,key;
	int count=1;
	for(i=0;i<6;i++)
	{
		
		cin>>n[i];
	}
	for(int i=0;i<6;i++){
	    count =1;
	    key =n[i];
	    for(int j=i+1;j<6;j++){
	        if(key==n[j]){
	            count=count+1;
	        }
	    }
	    cout<<count<<" ";
	    
	}
}
