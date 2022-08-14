#include<iostream>
using namespace std;

/*void Change_me(int y){  //pass by value, both x and y are different memory locations
 y=20;
}*/


void Change_me(int &y){   //pass by refernce as both x and y shares same memory locations
 y=20;
}





int main(){
int x=10;
Change_me(x);

cout<<"x = "<<x<<endl;


return 0;
}
