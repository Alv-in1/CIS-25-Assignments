# CIS-25-Assignments
Assignment-Week8: Module 8
This project demonstrates a simple Bank Account Simulation using Object-Oriented Programming concepts in C++.

  *First, we created a class named BankAccount. The class includes two sections: a public and a private section. In the private section, we created a variable named balance. On the public section, we have:
  
    - A method void that takes care of the deposit. With that method, the user can deposit money into their account, and the balance, first set at zero, can be increased by the amount deposited.
    
    - A method to make a purchase. Here, we first verified if the cost of the purchase is inferior to the balance. If it is, the purchase will be successful, and the cost will be deducted from the balance. In case the cost is above the current balance, a message: "funds insufficient" will be displayed on the screen, followed by how much they have in their account.
    
    - A method to display the balance of the bank account. After every purchase, a message showing how much remains in the account is displayed to let the user know of their current balance.
    
    - A method to save Transactions. Every deposit and purchase is saved in a document.

  * We created in the Main() part, an object for our class "BankAccount". We deposited $1000, and we bought an Airpod at $280, and an Apple Watch at $700. And we wanted our program to show our balance before the transaction, the number of purchase that we made with the cost of each, and at the end, the remaining amount.

The simulation demonstrates how classes, methods, private variables, and file handling (ofstream) work in C++.
