#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound() override
    { // Overriding
        cout << "Dog barks" << endl;
    }
};

int main()
{

    // Animal a;
    Dog d;
    // a.sound(); // Output: Animal makes a sound

    Animal *a;
    a = &d;
    a->sound();  // Output: Dog barks (Run-time polymorphism)
    return 0;
}
// overriding