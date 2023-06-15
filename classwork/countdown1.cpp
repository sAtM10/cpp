#include <iostream>
using namespace std;
//countdown ,take input n output from n to 1 on diff lines when cureent countdown number is multiple of 5 display beep// 
int main() 
{
	    int i,n;
    cin >> n;
    for(i=n;i>0;i--)
    {
        cout<<i<<endl;
        if(i%5==0)
        {
            cout<<"\a"<<endl;
        }
        
    }
    

    
    
    return 0;
}