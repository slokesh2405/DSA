#include<iostream>
using namespace std;

int main(){

cout<<"Enter two numbers : ";
int a,b;
cin>>a>>b;

int minimum=min(a,b);
int hcf=1;

for(int i=1;i<=minimum;i++){
    if(a%i==0 && b%i==0){
        hcf=i;
    }
}

cout<<"HCF = "<<hcf;



return 0;
}
