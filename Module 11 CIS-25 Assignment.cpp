#include <iostream>
using namespace std;

class Product {
    int id;
    string name;
    float price;
public:
    Product(int i, string n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called\n";
    }
    ~Product() {
        cout << "Destructor called\n";
    }
    void printDetails() {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};

int main() {
    Product p(203, "Energy drink", 3.05);
    p.printDetails();
    return 0;
}


