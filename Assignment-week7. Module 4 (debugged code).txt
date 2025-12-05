#include <iostream>

using namespace std;

int main() {
    //I corrected the following line by adding commas after eery variable. I added a semicolon (;) at the end.
    float n1, n2, n3;
    //I changes "<" with "<<"
    cout<<"Enter three numbers: ";
    cin>> n1>> n2>> n3;
    //Right now, this code works perfectly, but if all the number are identicals, it will still give a largest number. This following lines will help with that.
    if( n1 == n2 && n2 == n3){
      cout << "All three numbers are identical: "<< n1 <<" = "<< n2 <<" = "<< n3 <<"."<<endl;
    //I wanted to use one if statement so I changed the other if with else if and else.
    //I changes "=" with ">=" because we are comparing two variables and we want the largest. Therefore we do not need an equality. 
   }else if(n1 >= n2 && n1 >= n3){
        cout << "Largest number: " << n1<<endl;
    }else if(n2 >= n1 && n2 >= n3){
        //I changes the comparision symbol here as well because we want the largest one. And I changes n1 to n2 because in this case, n2 is the largest and we want to print the largest
        cout << "Largest number: " << n2 <<endl;
    } else if(n3 >= n1 && n3 >= n2){
        
        //I added a semicolon at the end of this following line
        cout << "Largest number: " << n3;
        //I changes n2 to n3 because we want to print the largest and n3 is the largest.
        
  } 
    return 0;
}
