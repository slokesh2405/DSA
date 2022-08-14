#include<iostream>
#include<string.h>
using namespace std;


void Reverse(string str,int length){
int s=0;
int e=str.length()-1;
while(s<e){
    swap(str[s],str[e]);
    s++;
    e--;
 }
 cout<<str;
}


int main(){
string str;
cout<<"Enter string : ";
getline(cin,str);
int length=str.length();
Reverse(str,length);

return 0;
}
