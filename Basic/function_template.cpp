#include<iostream>
using namespace std;

template<class X>   //function template is generic function that is handle all types of data
X big(X a,X b)
{
    if(a>b)
        cout<<a<<endl;
    else
        cout<<b<<endl;
}

int main()
{
    big(4,6);
    big(4.7,4.8);
    big('a','y');

   return 0;

}
