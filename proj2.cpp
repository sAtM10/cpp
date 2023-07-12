//hw project student// text pro//
#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<fstream>
using namespace std;
//text file project//
char sn[20];
int sc;
int sr;
void insert()
{
	ofstream fout("emp.txt",ios::app);
	
	cout<<"enter student class"<<endl;
	cin>>sc;
	fflush(stdin);
	
	cout<<"enter student name"<<endl;
	cin>>sn;
	fflush(stdin);
	
	cout<<"enter student roll"<<endl;
	cin>>sr;
	fflush(stdin);
	
	fout<<sc<<"\t"<<sn<<"\t"<<sr<<endl;
	fout.close();
}
void display()
{
	ifstream fin("emp.txt");
	while(fin>>sc>>sn>>sr)
	{
		cout<<sc<<endl;
		cout<<sn<<endl;
		cout<<sr<<endl;
	}
	fin.close();
}
void search()
{
	ifstream fin("emp.txt");
	int x=0;
	int roll;
	cout<<"enter search roll"<<endl;
	cin>>roll;
	while(fin>>sc>>sn>>sr)
	{
		if(sr==roll)
		{
			cout<<sc<<endl;
		    cout<<sn<<endl;
		    cout<<sr<<endl;
			x=1;
			break;
		}
	}
	if(x==1)
	{
		cout<<"record found"<<endl;
	}
	else
	{
		cout<<"record not found"<<endl;
	}
	fin.close();
}
void delete1()
{
	ifstream fin("emp.txt");
	ofstream fout("temp.txt",ios::app);
	int roll;
	int x=0;
	cout<<"enter deleted roll"<<endl;
	cin>>roll;
	
	while(fin>>sc>>sn>>sr)
	{
		if(sr==roll)
		{
			x=1;
			continue;
		}
		else
		{
			fout<<sc<<"\t"<<sn<<"\t"<<sr<<endl;
		}
	}
	fin.close();
	fout.close();
	remove("emp.txt");
	rename("temp.txt","emp.txt");
	
	if(x==1)
	{
		cout<<"record deleted"<<endl;
	}
	else
	{
		cout<<"record not found"<<endl;
	}
}
void modify()
{
	int x;
	int roll;
	char name[20];
	int grade;
	
	ifstream fin("emp.txt",ios::in);
	ofstream fout("temp.txt",ios::app);
	
	cout<<"enter update roll"<<endl;
	cin>>roll;
	
	while(fin>>sc>>sn>>sr)
	{
		if(sr==roll)
		{
	 
	        cout<<"enter student name"<<endl;
	        cin>>name;
	        fflush(stdin);
	
	        cout<<"enter student class "<<endl;
	        cin>>grade;
	        fflush(stdin);
	
	        fout<<sc<<"\t"<<name<<"\t"<<grade<<endl;
			
			x=1;
		}
		else
		{
			  fout<<sc<<"\t"<<sn<<"\t"<<sr<<endl;
		}
	}
	fin.close();
	fout.close();
	remove("emp.txt");
	rename("temp.txt","emp.txt");
}
int main()
{
	int ch;
	do
	{
		cout<<"1:add new records \n";
		cout<<"2:display all records \n";
		cout<<"3:search any records \n";
		cout<<"4:delete any records \n";
		cout<<"5:update any records \n";
		cout<<"6:exit\n";
		
		cout<<"enter your choice \n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
			{
				insert();
				break;
			}
			case 2:
			{
				display();
				break;
			}
			case 3:
			{
				search();
				break;
			}
			case 4:
			{
				delete1();
				break;
			}
			case 5:
			{
				modify();
				break;
			}
			case 6:
			{
				break;
			}
			default:
			{
				cout<<"wrong choice \n";
				break;
			}
		}
		
	}while(ch!=6);
	
	return 0;
	
}
			