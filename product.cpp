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

int main(){

    Product electronics;
    electronics.Name = "Samsung Smart TV";
    electronics.quantity = 50;
    electronics.category = "Electronics";
    electronics.productionDate = "2024-03-15";

    Product nonElectronics;
    nonElectronics.Name = "Wooden Chair";
    nonElectronics.quantity = 100;
    nonElectronics.category = "Non-Electronics";
    nonElectronics.productionDate = "2024-02-10";



    electronics.display();
    nonElectronics.display();
}