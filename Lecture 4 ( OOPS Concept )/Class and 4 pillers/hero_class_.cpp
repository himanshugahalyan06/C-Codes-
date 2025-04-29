#include <iostream>
using namespace std;
// class is the combination of member function and data member
class hero
{
public:
    int won, loss;
    int health;
    float height;

    string name;

    void display()
    {
        cout << "Name of the hero: " << name << endl
             << "Height of the hero is: " << height << endl
             << "Health of the hero is: " << health << endl;

        if (won > loss)
        {
            cout << "He is a Real Hero" << endl;
        }
        else
        {
            cout << "Not a Real Hero" << endl;
        }
    }
};

int main()
{

    hero h1;
    h1.name = "Super-Man";
    h1.health = 100;
    h1.height = 6.5;
    cout << "Enter the number of fight he won : " << endl;
    cin >> h1.won;
    cout << "Enter the number of fight he loss : " << endl;
    cin >> h1.loss;

    h1.display();
}