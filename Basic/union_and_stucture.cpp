#include<iostream>
using namespace std;

struct student{
int roll;
float marks;
};

union student1{     // union is used for efficient use of memory as we can't do so in structure datatype
int roll1;
float marks1;
};

int main(){

struct student rohan;
rohan.roll=101;
rohan.marks=87.5;
cout<<"rohan's roll number : "<<rohan.roll<<" and size is : "<<sizeof(rohan.roll)<<endl;
cout<<"rohan's marks : "<<rohan.marks<<" and size is : "<<sizeof(rohan.marks)<<endl;
cout<<"size of student structure : "<<sizeof(student)<<endl;

cout<<"_____________________________________________"<<endl<<endl;;

union student1 mahi;
mahi.roll1=102;
//mahi.marks1=98.5;
cout<<"mahi's roll number : "<<mahi.roll1<<" and size is : "<<sizeof(mahi.roll1)<<endl;
//cout<<"mahi's marks : "<<mahi.marks1<<" and size is : "<<sizeof(mahi.marks1)<<endl;
cout<<"size of student union : "<<sizeof(student1)<<endl;



return 0;
}
