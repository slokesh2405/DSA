#include<iostream>
using namespace std;

class Complex{
int real;
int img;

public:
    Complex(int real,int img){
      this->real=real;
      this->img=img;
    }

    void print(){
    cout<<real<<" "<<img<<"i"<<endl;
    }

    void add(Complex c2){
        real=real+c2.real;
        img=img+c2.img;

        cout<<"after addition : "<<real<<" "<<img<<"i"<<endl;

    }

    void multiply(Complex c2){
    int real1=(real * c2.real) - (img * c2.img);
    cout<<real1<<endl;
    int img1= (real * c2.img) + (img * c2.real);
    cout<<img1<<endl;

    cout<<"after multiplication : "<<real1<<" "<<img1<<"i"<<endl;

    }


};

int main(){

Complex c1(3,2);
c1.print();
Complex c2(5,4);
c2.print();
//c1.add(c2);
c1.multiply(c2);


return 0;
}
