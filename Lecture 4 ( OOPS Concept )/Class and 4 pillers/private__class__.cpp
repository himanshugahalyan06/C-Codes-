#include<iostream>
using namespace std;

class Bank{
private:                                  // Abstraction Code 
 long long bank_balance;

 public:
 string Owner_Name;
 int Account_Number;


void setter(long long x){
            bank_balance=x;
}

void display(){
    cout<<"Name of the Owner is: "<<Owner_Name<<endl<<"Account number is: "<<Account_Number<<endl;
    cout<<"The bank_balance of Owner is: "<<bank_balance<<endl;
}

};
int main(){

Bank b1;
b1.Account_Number=00002554670;
cout<<endl;
b1.Owner_Name="Himanshu Gahalyan";
cout<<endl;
b1.setter(100000000000);

b1.display();

}