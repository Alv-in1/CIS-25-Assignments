# CIS-25-Assignments
Assignment-week6
This assignment will help us use dynamic memory alocation and binary searcg to locate items in a list.
Let's explain some lines of our code:

*Struct
  It defines a custom data type. The name of our structure in this case is: Item.

*Binary Search Function
  It executes our binary search. The role of this section is to search within a sorted array. It starts by considering the entire range, then repeatedly checks the middle element. If the middle element matches the search value, it returns its position. If the search value is smaller than the middle element, it continues searching in the left half. If the search value is larger, it continues in the right half. This process repeats until the item is found or the search range becomes empty

*New
  It helps dynamically alocate an array of Items

*User Interaction
  It ask the user the Item ID and execute the previous line of the code.

*delete[]
  It releases the dynamically alocated memory to avoid memory leaks.

    In Summary, this code creates a dynamic array of items, fills it, and sorts it. It allows the user to search for an item by ID using a predefine binary search function. It cleans up the memory at the end so there is no leak.
