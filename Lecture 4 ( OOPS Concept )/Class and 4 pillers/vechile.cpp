#include <bits/stdc++.h>
#include<string>
using namespace std;

class vechile
{
public:

    int speed;
    float time;
    string color;
    string type; 
    int length;

    float distance(int x, float y)
    {
        float d = x * y;
        return d;
    }

        void display(){
            cout<<"Length of Vechile is: "<<length<<endl<<"Speed of the vechile is: "<<speed<<endl<<"The time taken by vechile is: "<<time<<endl;
        }


};

int main()
{
    vechile v;
    
    v.length = 4;
    cout<<"Enter the speed: ";
    cin>>v.speed;
    cout<<"Enter the time: ";
   cin>>v.time;
    v.type = "Two-wheeler";
    v.color = "black";

    float result =v.distance(v.speed,v.time);
        v.display();
        cout<<"The distance cover by the vechile: ";
        cout<<result;
}