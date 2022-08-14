#include<iostream>
#include<string>
using namespace std;

int getLength(char str[]){
int count=0;
for(int i=0;str[i]!='\0';i++){
    count++;
}
return count;
}

char toLower(char ch){
    if(ch>='A'&& ch<='Z'){
        ch=ch+32;

 }
 return ch;
}

int Pallindrome(char str[],int n){

int s=0;
int e=n-1;
while(s<=e){
        if(toLower(str[s])!=toLower(str[e])){
            return 0;
        }
        else{
                if(toLower(str[s])>='a' && toLower(str[e]<='z')){  // for only alphabetic symbols
                        s++;
                        e--;
                }
                else
                    return 0;

        }

}

return 1;



}




int main(){
char * str=new char[20];

cout<<"Enter string : ";
cin>>str;
int n=getLength(str);
cout<<Pallindrome(str,n)<<endl;


return 0;}
