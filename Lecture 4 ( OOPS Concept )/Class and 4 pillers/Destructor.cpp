#include<iostream> 
using namespace std;

class student{                      // destructor is the function which is called by default when a object  is destroyed or our code in going to end 
    public:
    int roll;                                // destructor is always equal to number of object in your main function 

    student(){
        cout<<"Default Constructor called"<<endl;
        roll = 0;
    }

    student(int x){
        cout<<"Parameterized Constructor called"<<endl;
        roll = x;
    }

    student(student &s){
        cout<<"Copy Constructor called"<<endl;
        roll = s.roll;
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }
    

    


};

int main(){

    student s1; // default constructor called
    cout<<s1.roll<<endl;

    student s2(375); // parameterized constructor called
    cout<<s2.roll<<endl;

    student s3 = s2;
    // student s3(s2); // copy constructor called
    cout<<s3.roll<<endl;




    return 0; // destuctor called
}


// #include<iostream>
// using namespace std;

//     class student{

//         public:
//          string name;
//          int roll;

//         student (){
//             cout<<"Default Called " << endl;
//              name="Manish Kumar";
//              roll=375;   


//         }

//         student (string r, int n){
//             cout<<"Parametrized called" << endl;
//              name = r;
//              roll=n;
//         }

//         student (student &n1){
//             cout<<"Copy called " << endl;
//             name = n1.name;
//             roll = n1.roll;

//         }

//         ~student(){
//             cout<<"Destructor called ";
//         }

//     };





// int main(){

//     student s1;
//     cout<<s1.name<<endl;
//     cout<<s1.roll<<endl;

//     student s2("pawan kumar",3759);
//     cout<<s2.name<<endl;
//     cout<<s2.roll<<endl;

//     student s3(s2);
//     cout<<s3.name<<endl;
//     cout<<s3.roll<<endl;


//     return 0;
// }