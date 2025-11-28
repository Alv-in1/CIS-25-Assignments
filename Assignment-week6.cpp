#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//Struct definition
struct Item {
    string name;
    int id;
};

// Binary search
int binarySearch(Item* arr, int size, int targetID) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid].id == targetID)
            return mid;
        else if (arr[mid].id < targetID)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {

    const int SIZE = 200;
    Item* items = new Item[SIZE];   // dynamic allocation


    for (int i = 0; i < SIZE; i++) {
        items[i].id = 1000 + i;  
        items[i].name = "Item" + string(3 - to_string(i).length(), '0') + to_string(i);
        
        
    }

    
    sort(items, items + SIZE, [](const Item& a, const Item& b) {
        return a.name < b.name;
    });

    // User interreacrion
    int searchID;
    cout << "Enter an ID (between 1000-1199) to search for: ";
    cin >> searchID;

    // Using my binary function
    int index = binarySearch(items, SIZE, searchID);

   
    if (index != -1) {
        cout << "Item found!" << endl;
        cout << "Name: " << items[index].name << endl;
        cout << "ID: " << items[index].id << endl;
    } else {
        cout << "Item with ID " << searchID << " not found." << endl;
    }

    // Free memory
    delete[] items;

    return 0;
}
