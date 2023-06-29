/*You need to make a countdown app.
Given a number N as input, output numbers from N to 1 on separate lines.
Also, when the current countdown number is a multiple of 5, the app should output "Beep".*/
//project 2 conditionals and loops//
#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    cin >> n;
    for(i=n;i>0;i--)
    {
        cout<<i<<endl;
        if(i%5==0)
        cout<<"Beep"<<endl;
        
    }
    
    return 0;
}