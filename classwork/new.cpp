#include <iostream>
using namespace std;
int main()
{
    char sn[20];
    int sc;
    float ss;
    char sz[100];
    cout<<"enter name"<<endl;
    cin>>sn;
    cout<<"enter code"<<endl;
    cin>>sc;
    cout<<"enter salary"<<endl;
    cin>>ss;
    cout<<"enter zone"<<endl;
    cin>>sz;
    
    float cm = (ss*8)/100;
    cout<<"the commision is"<<cm<<endl;

    float ts = ss-cm;
    cout<<"the total salary is"<<ts<<endl;


}