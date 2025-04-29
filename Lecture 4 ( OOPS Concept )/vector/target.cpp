#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of vector: ";
    int n;
    cin>>n;
    cout<<"Enter the Target: ";
    int target;
   cin>>target;
   cout<<"Enter the elements: ";
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;

    bool flage=false;

    for(int i=0;i<n;i++){
        if(v[i]==target){
            flage=true;
        }
        
    }

    if(flage==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    

}