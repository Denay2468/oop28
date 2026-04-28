#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
        int NIM;
        string Name;
        float Grade;

        void display()
        {
            cout << "NIM: " << NIM << endl;
            cout << "Name: " << Name << endl;
            cout << "Grade: " << Grade << endl;
        }
};