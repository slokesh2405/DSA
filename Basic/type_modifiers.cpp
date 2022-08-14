#include<iostream>
using namespace std;

int main(){
cout<<"unsigned : "<<sizeof(unsigned)<<endl; // 4 bytes
cout<<"signed : "<<sizeof(signed)<<endl; // 4 bytes
cout<<"unsigned int : "<<sizeof(unsigned int)<<endl; // 4 bytes
cout<<"signed int : "<<sizeof(signed int)<<endl; // 4 bytes
cout<<"unsigned char : "<<sizeof(unsigned char)<<endl; // 1 byte
cout<<"signed char : "<<sizeof(signed char)<<endl;// 1 byte
cout<<"long : "<<sizeof(long)<<endl;// 4 byte
cout<<"long long: "<<sizeof(long long)<<endl; // 8 byte (4+4 bytes)
cout<<"long int : "<<sizeof(long int)<<endl;// 4 bytes
cout<<"long double : "<<sizeof(long double)<<endl; // 12 bytes (4+8 bytes)
cout<<"double : "<<sizeof(double)<<endl;// 8 bytes
cout<<"short : "<<sizeof(short)<<endl; // 2 bytes
cout<<"short int : "<<sizeof(short int)<<endl; // 2 bytes
cout<<"unsigned long long : "<<sizeof(unsigned long long)<<endl; // /4+4 bytes
cout<<"signed long long : "<<sizeof(signed long long)<<endl; // 4+4 bytes

return 0;
}
