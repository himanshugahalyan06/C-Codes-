#include <iostream>
using namespace std;
int main (){
int n;
int sum=0;
cout<<"Enter the number ";
cin>>n;
for(int i=0;i<=n;i++){
    sum+=i;
}
cout<<"The sum of n number is:"<<sum;
}