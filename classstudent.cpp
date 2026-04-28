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

int main()
{
    Student student1;
    student1.NIM = 2024;
    student1.Name = "Sule";
    student1.Grade = 75.5;

    student1.display();

    return 0;
}