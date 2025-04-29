#include <bits/stdc++.h>
using namespace std; // class is by-default private we cannot access any member without public keywords
class a
{
public:
    int roll_no;
    // void display(){
    //     cout<<"Roll_NO of the Student is: "<<roll_no<<endl;
    // }
};

class b : public a
{

public:
    void display()
    {
        cout << " Roll No of the Student is: " << roll_no << endl;
    }
};

int main()
{
    b b1;
    b1.roll_no = 23;
    b1.display();
}