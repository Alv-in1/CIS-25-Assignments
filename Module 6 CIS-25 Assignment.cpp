#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//Creating a class Item
class Item{
    public:
    string name;
    int quantity;
    
    //A method saveToFile to write the data in the format: name, quantity
    void saveToFile(){
        ofstream out("items.txt");
        if (out.is_open()) {
            out<<name <<","<< quantity<<endl;
            out.close();
            cout <<"Item saved to file."<<endl;
            
        }else{
            cout<<"Unable to open file for writing."<<endl;
        }
    }
    
    //A method loadFromFile() to read and display data from the file
    void loadFromFile(){
        ifstream in("items.txt");
        if (in.is_open()){
            string line;
            while (getline(in, line)){
                cout <<"File content: "<< line <<endl;
            }
            in.close();
        }else{
            cout <<"Unable to open file for reading." << endl;
        }
    }
};

int main() {
    Item tool;
    tool.name = "Strawberry";
    tool.quantity = 100;
    
    tool.saveToFile();
    tool.loadFromFile();
    
    return 0;
}

        
        
        
        
        
        
        
    
