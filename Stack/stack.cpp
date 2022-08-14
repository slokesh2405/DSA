#include<iostream>
#define CAPACITY 5
using namespace std;

int a[CAPACITY];
int data,nextIndex=0;

void push(int data)
{
    if(nextIndex==CAPACITY)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        a[nextIndex]=data;
        nextIndex++;
        cout<<a[nextIndex-1]<<"inserted"<<endl;
    }

}

void pop()
{
 int garb;
 if(nextIndex==0)
 {
     cout<<"Underflow"<<endl;
 }
 else{
 nextIndex--;
 garb=a[nextIndex];
 cout<<garb<<"deleted"<<endl;
}

}

void top()
{
    cout<<"top element : "<<a[nextIndex-1]<<endl;
}





int main(){

push(10);
push(20);
push(30);
top();
pop();
top();
pop();
top();
push(100);
top();





return 0;}


