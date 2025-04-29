#include<iostream>
using namespace std;
int main(){

int n,c=0;
cout<<"Enter the number ";
cin>>n;
if(n==0){
    c=1;
}
while(n!=0){
    n=n/10;
    c+=1;
}
cout<<"The number of digit is "<<c;


}