#include<iostream.h>
class queue
{
int data[100],front,rear;
public:
void push(int);
void pop();
queue();
~queue();
void print();
};
queue::~queue()
{
}
queue::queue()
{
front=-1;
rear=-1;

}
void queue::push(int x)
{
if(rear==99)
{
cout<<"overflow...";
return;
}
else if(rear==-1 && front==-1)//list is empty
{
front=0;
rear=0;
}
else
{
rear=rear+1;
}
data[rear]=x;
}
void queue::pop()
{
if(front==-1  &&  rear==-1)
{
cout<<"list is emplty...";
return;
}
else if( front==rear)
{
front=rear=-1;
}
else
{
front=front+1;
}
}

void queue::print()
{
for(int i=front;i<=rear;i++)
{
cout<<data[i]<<"\t";
}
cout<<endl;
}
void main()
{
queue p;
p.push(10);
p.print();
p.push(20);
p.print();
p.push(30);
p.print();
p.pop();
p.print();
}