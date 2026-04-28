#include <iostream>
#include <string>
using namespace std;


class Product
{
    public:
        string Name;
        int quantity;
        string category;
        string productionDate;

        void display()
        {
            cout << "Name: " << Name << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Category: " << category << endl;
            cout << "Production Date: " << productionDate << endl;
        }
};