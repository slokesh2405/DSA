#include<iostream>
#include<string.h>
using namespace std;

char getMaxOccur(string str){
    int arr[26]={0};
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }

  int max=-1;  //find maximum occurring character
  int ans=0;
  for(int i=0;i<26;i++){
    if(max<arr[i]){
        ans=i;
        max=arr[i];
    }
  }
return ans+'a';

}


int main(){
string str;
cout<<"Enter string : ";
cin>>str;
char c=getMaxOccur(str);
cout<<c;

return 0;
}
