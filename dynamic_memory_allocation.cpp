#include<iostream>
using namespace std;

int main(){

/*int a[20];
int n;

cin>>n;
cout<<sizeof(a[n])<<endl;*/ /*this is a bad idea to do dynamic memory allocation*/


int* p=new int;
*p=10;
cout<<*p<<endl;
cout<<p<<endl;

/* array on heap(dynamic array allocation)*/

int n;
cin>>n;
int *pa= new int[n];

for(int i=0;i<n;i++)
{
  cout<<"Enter element : "<<endl;
  cin>>pa[i];

}
cout<<"size of pa array : "<<sizeof(pa[n])<<endl; /*returns size of base index */
return 0;
}

