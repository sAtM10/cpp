#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    char sn[20],sm[20],sz[20];
	cout<<"enter 1 string"<<endl;
	gets(sn);
	cout<<"enter 2 string"<<endl;
	gets(sm);
	
	strcpy(sz,sn);
	strcpy(sn,sm);
	strcpy(sm,sn);
	
	puts(sn);
	puts(sm);
	
}