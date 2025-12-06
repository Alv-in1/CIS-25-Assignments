# CIS-25-Assignments
Assignment-week6 Module 4
The goal of this assingment is to debug a code.

I have seen couple mistakes  in the code and I corrected them.
On the line "float n1 n2 n3," there was a syntax error. I then changed it to "float n1, n2, n3;"

On the line "cin>>n1>n2>n3;" I changed it to "cin>>n1>>n2>>n3".

The conditions and the printed messages do not match. I then changed some lines. The original if statement is: 

        if(n1 = n2 && n1 >= n3
                cout << "Largest number: " << n1;
        
            if(n2 == n1 && n2 >= n3)
           {     cout << "Largest number: " << n1;
            
            if(n3 >= n1 && n3 >= n2)
                cout << "Largest number: " << n2
          }
There were multiple problems here:

The first if used = instead of >=, which assigns a value instead of comparing it.

The printed result did not match the condition (for example, printing n2 when n3 was the largest).

Using separate if statements caused more than one block to run.

The logic was inconsistent and confusing.

  My new if statement looks like this:

        if( n1 == n2 && n2 == n3){
            cout << "All three numbers are identical: "<< n1 <<" = "<< n2 <<" = "<< n3 <<"."<<endl;
            
         }else if(n1 >= n2 && n1 >= n3){
              cout << "Largest number: " << n1<<endl;
          }else if(n2 >= n1 && n2 >= n3){
              
              cout << "Largest number: " << n2 <<endl;
          } else {
              
              cout << "Largest number: " << n3;
             
              }
        I made sure that I use a single if statement instead of couple like the original code. I also added another line to make sure that the code is logical. It is this line:
        
if( n1 == n2 && n2 == n3){
      cout << "All three numbers are identical: "<< n1 <<" = "<< n2 <<" = "<< n3 <<"."<<endl;

      it informs the user that they entered three identical numbers.

      I also changed the condition of each other if statement so that it executes our goal and print what we wanted. 

      It looks cleaner and works properly.
