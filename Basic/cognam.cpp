#include<iostream>
#include<vector>

using namespace std;

vector<int> sqr(int a[],int n){
vector<int> temp;

for(int i=0;i<n;i++){
    if(a[i] % 2 !=0){
        temp.push_back(a[i]*a[i]);
    }
    else{
        temp.push_back(a[i]);
    }
}


return temp;}


int main(){
int a[]={1,2,3,4,5};
int n= sizeof(a)/sizeof(a[0]);
vector<int> v1=sqr(a,n);

for(int i=0;i<n;i++){
    cout<<v1[i]<<" ";
}


return 0;
}
