#include<iostream>
#include<string>
using namespace std;

enum name {Iron_Man,Captain_America,Thor,Spider_Man,Black_Widow,Hawk_Eye,Hulk}; // enumeration accepts only spcific list of values
int main(){

cout<<"Enter actor's or actress's heroic name to know their actual name from list : "<<endl;
cout<<"0>.Iron-Man"<<endl;
cout<<"1>.Captain-America"<<endl;
cout<<"2>.Thor"<<endl;
cout<<"3>.Spider-Man"<<endl;
cout<<"4>.Black-Widow"<<endl;
cout<<"5>.Hawk-Eye"<<endl;
cout<<"6>.Hulk"<<endl;
int n;
cout<<"---------------------------------"<<endl;
cout<<"Enter : ";
cin>>n;
cout<<"---------------------------------"<<endl;
cout<<"_________________________________"<<endl;
switch(n){

case 0: cout<<"Robert Dowry Jr."<<endl;
               break;
case 1: cout<<"Chris Evans"<<endl;
               break;
case 2: cout<<"Chris Hemsworth"<<endl;
               break;
case 3: cout<<"Tom Holland"<<endl;
               break;
case 4: cout<<"Scarlett Johanson"<<endl;
               break;
case 5: cout<<"Jeremy Renner"<<endl;
               break;
case 6: cout<<"Mark Ruffalo"<<endl;
               break;
default : cout<<"wrong choice"<<endl;
}


return 0;}
