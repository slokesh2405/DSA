#include<iostream>
using namespace std;

int getLength(char str[]){
int count=0;
for(int i=0;str[i]!='\0';i++){
    count++;
}
return count;
}


void Reverse(char str[],int length){
int s=0;
int e=length-1;
while(s<e){
    swap(str[s],str[e]);
    s++;
    e--;
 }


}



int main(){
char *str= new char[20];
cout<<"Enter string : ";
cin>>str;
int n=getLength(str);
Reverse(str,n);
cout<<str<<endl;

return 0;}
