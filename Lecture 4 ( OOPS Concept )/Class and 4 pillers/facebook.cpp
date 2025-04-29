#include<bits/stdc++.h>
#include<string>
using namespace std;
class Facebook{
    private:                                         //Encapsulation Code 
     string  password;
    
     public:
     string User_Name;
     int id,number_of_post;
    
    void setter(string x){
                password=x;
    }
    // Display function is also konow as Getter Function 
    void display(){
        cout<<"Name of the Owner is: "<<User_Name<<endl<<"The Number of post is: "<<number_of_post<<endl<<"The id of the account is: "<<id<<endl;
        cout<<"The password of user's facebook account is: "<<password<<endl;
    }
    
    };
    int main(){
    
    Facebook f1;
    f1.User_Name="Himanshu Gahalyan";
    cout<<endl;
    f1.number_of_post=10;
    cout<<endl;
    f1.id=12344;
    cout<<endl;
    f1.setter("himanhu_01_06_@");
    
    f1.display();
    
    }