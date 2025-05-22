#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create a file //

    ofstream file1;

    file1.open("C:\\Users\\Himanshu\\OneDrive\\Desktop\\C++\\Basic.txt");
    cout << "file created" << endl;

    file1.close();

    // Enter data in the existing file //

    ofstream file2;

    file2.open("C:\\Users\\Himanshu\\OneDrive\\Desktop\\C++\\Basic.txt");
    file2 << "Hi B.Tech 2nd Sem";

    cout << "data entered" << endl;

    file2.close();

    // Copy data from existing file //

    ifstream readf;
    string str;
    readf.open("C:\\Users\\Himanshu\\OneDrive\\Desktop\\C++\\Basic.txt");
    while (getline(readf, str))
    {
        cout << str;
    }
    cout << endl;

    readf.close();

    // Create a new file and copy data //

    ifstream rf;
    ofstream cf;

    rf.open("C:\\Users\\Himanshu\\OneDrive\\Desktop\\C++\\Basic.txt");   // copy data from this file
    cf.open("C:\\Users\\Himanshu\\OneDrive\\Desktop\\C++\\Basic_1.txt"); // create a new file

    char st;

    while (rf.get(st))
    {
        cf.put(st);
    }

    cout << "copied !!" << endl;
    rf.close();
    cf.close();

    // Delete a file //

    int val = remove("C:\\Users\\Himanshu\\OneDrive\\Desktop\\C++\\Basic.txt");
    if (val == 0)
        cout << "file deleted";
    else
        cout << "file not deleted";
}