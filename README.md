# CIS-25-Assignments
#Module 11
This module demonstrates the use of Encapsulation, Classes, Objects, Constructors, Destructors, and Member functions.

*Encapsulation:
Encapsulation means keeping the data of a class and the functions that work with that data all together in one place. It helps organize the information and protects it by controlling how it can be accessed or changed. By keeping everything inside the class, our code becomes cleaner, easier to understand, and safer to work with.

*Class:
Our class helps create an object that stores the ID of a product, its name, and its price.
Inside our class, we have:

-Constructor:
Our constructor's goal is to initialize the object's values. It runs automatically when a product object is created and prints a message "Constructor called".This shows that the object has been successfully set up.

-Destructor:
Our destructor's goal is to clean up after the object. It runs automatically when our object goes out of scope or the program finishes. It helps prevent memory leaks.

-Function:
Function represents the action we want our object to perform. Basically, what we want the object to do with the data provided. In our case, our function prints the product's ID, name, and price. It uses the data stored in the object and displays it to the user.

*Main:
Main is where we create an object.

To recapitulate:
We create an object in main, the constructor initializes the data, the function prints the object’s information, and the destructor handles cleanup once the object is no longer needed.

#Module 6
This module demonstrates the use of Classes, objects, Methods, and File I/O in C++. It shows how to write data to a file and read data back from that same file.

*Class:
Our class helps create an object that stores the name of an Item and its quantity. It also has two methods that handle file operations.
Inside our class, we have:

-saveToFile Method:
This method stores the name and quantity of the item in a text file. We check if the file can be opened and print a confirmation message if everything is stored correctly. In case it can not be opened, we have an error message that will be shown to the user.

-loadFromFile Method:
This method reads the content from the text file. It uses getline to read the input, and display what was stored in the file. In case the file cannot be read, we display an error message to the user.

*Main:
Main is where we create an object.

To recapitulate:
We create an Item object, assign values to its variables, save the item to a file, and then load the file to display what was saved.
