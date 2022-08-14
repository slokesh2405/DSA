#include<iostream>
using namespace std;

int main()
{
char i='b';
char *p=&i;
cout<<"address at p : "<<p<<endl;
p=p+1 ;
cout<<"address at p : "<<p<<endl;


return 0;
}
