#include<iostream>
using namespace std;


class student{
    public:
    long long  roll_no;

    string name;

    void display(){
        cout<<"Name of the student is : "<<name<<endl<<"Roll number of the student is : "<<roll_no;
}



};

// An instantce of a class is called object 

int main (){
    
student s1;                             // Object for above class 
s1.roll_no=2401301035;
s1.name="Himanshu";

s1.display();

}