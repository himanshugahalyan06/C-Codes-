#include <bits/stdc++.h>
using namespace std;
class Myclass
{

public:
    int value;
    // Default Constructor
    Myclass()
    {
        value = 0;
    }

    // Parameterised Constructor
    Myclass(int val)
    {
        value = val;
    }

    // Copy Constructor
    Myclass(Myclass &obj1)
    {
        value = obj1.value;
    }

    // ~Myclass(){                   // destructor is the function which is called by default when a object  is destroyed or our code in going to end 
    //     cout<<"Destructor called"<<endl;    // destructor is always equal to number of object in your main function 
    // }
};

int main()
{
    Myclass obj;                               // Default Constructor
    cout << "Value is: " << obj.value << endl; // Output Value is 0

    Myclass obj1(10); // Paramerterised Constructor
    cout << "Value is: " << obj1.value << endl;

    Myclass obj2 = obj1; // copy constructor
    // Myclass obj2(obj1); second way to write copy constructor
    cout << "value is: " << obj2.value << endl;
}