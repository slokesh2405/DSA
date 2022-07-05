#include<iostream>
using namespace std;

int main(){

int i=10;
int *p=&i;
int **pp=&p;

cout<<"address of i : "<<&i<<endl;
cout<<" p : "<<p<<endl;
cout<<" pp : "<<pp<<endl;
cout<<"value at p : "<<*(*pp)<<endl;


return 0;
}
