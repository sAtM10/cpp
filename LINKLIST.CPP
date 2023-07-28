#include<iostream.h>
#include<conio.h>
struct Node
{
int data;
Node *next;
};
Node *head=NULL;
void insert(int d)
{
Node *temp1=new Node();
temp1->data=d;
temp1->next=head;
head=temp1;
}
void insertlast(int d)
{
Node *temp1;
temp1=head;
Node *temp2=new Node();
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp2->data=d;
temp2->next=temp1->next;
temp1->next=temp2;
}
void insert(int data,int n)
{
Node *temp1=new Node();
temp1->data=data;
temp1->next=NULL;
if(n==1)
{
temp1->next=head;
head=temp1;
return;
}
Node *temp2=head;
for(int i=0;i<n-2;i++)
{
temp2=temp2->next;
}
temp1->next=temp2->next;
temp2->next=temp1;
}
void del(int n)
{
Node *temp1=head;
if(n==1)
{
head=temp1->next;
delete temp1;
return;
}
for(int i=0;i<n-2;i++)
{
temp1=temp1->next;
}
Node *temp2=temp1->next;
temp1->next=temp2->next;
delete temp2;

}
void reverse()
{
Node *c1,*n1,*p1=NULL;
c1=head;
while(c1!=NULL)
{
n1=c1->next;
c1->next=p1;
p1=c1;
c1=n1;
}
head=p1;
}
void print()
{
Node *temp=head;
cout<<"Link List:"<<endl;
while(temp!=NULL)
{
cout<<temp->data<<"\t";
temp=temp->next;
}
cout<<endl;
}
void search(int n)
{
int i=0,flag=0;
Node *t1;
t1=head;
while(t1!=NULL)
{
i++;
if(t1->data==n)
{
cout<<"Node Found: "<<endl<<"Pos: "<<i<<"\t"<<"Data: "<<t1->data<<endl;
flag=1;
return;
}
t1=t1->next;
}
if(flag==0)
{
cout<<"Element Not Found..."<<endl;
}
}
void main(){
clrscr();
insert(2,1);
print();
insert(3,2);
print();
insert(4,1);
print();
insert(5,2);
print();
insert(8,3);
print();
insert(10,3);
print();
del(1);
print();
del(3);
print();
reverse();
print();
search(5);
search(1);
search(10);
insert(9);
print();
insertlast(10);
print();
getch();
}