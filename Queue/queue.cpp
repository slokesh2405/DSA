#include<iostream>
#define CAPACITY 5
using namespace std;

int q[CAPACITY];
int firstIndex=-1;
int nextIndex=0,data,siz=0,ele,i;

void enqueue(int data)
{
    if(siz==CAPACITY)
    {
        cout<<"\n Overflow"<<endl;
    }
    else
    {

    q[nextIndex]=data;
    cout<<q[nextIndex]<<" inserted"<<endl;
    nextIndex=(nextIndex+1)%CAPACITY;



    if(firstIndex==-1)
    {
        firstIndex=0;
    }
    siz++;
    }
}

void peek()
{if(siz==0)
        cout<<"\nUnderflow"<<endl;
    else
        cout<<"\nValue at firstIndex : "<<q[firstIndex]<<endl;

}

void dequeue()
{
    if(siz==0)
        cout<<"\nUnderflow"<<endl;
    else
    {
        ele=q[firstIndex];
        firstIndex=(firstIndex+1)%CAPACITY;
        siz--;
        cout<<ele<<" deleted"<<endl;

        if(siz==0)
        {
            firstIndex=-1;
            nextIndex=0;
        }

    }

}

int main()
{
int ch;
while(1)
{ cout<<"\n\t^^select option for implement circular queue^^\n";
  cout<<"1->insert\n";
  cout<<"2->delete\n";
  cout<<"3->peek\n";
  cout<<"4->size of queue\n";
  cout<<"5->quit\n";
  cout<<"\n*******************************\n";
  cout<<"enter your choice : ";
  cin>>ch;
  switch(ch)
  { case 1 :cout<<"\nEnter data : ";
            cin>>data;
            enqueue(data);
	     break;
    case 2 : dequeue();
	     break;
    case 3 : peek();
	     break;
    case 4: cout<<"\nSize of Queue : "<<siz<<endl;
         break;
    case 5 : exit(0);
    default : cout<<"\tInvalid chooice\n";
    }
}
return 0;

}

