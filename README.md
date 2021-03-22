# Stack-Implementation (Object Oriented Programming Assignment)

You are to write a C++ Stack class template (see stack.cpp) which implements a stack. You must implement your own dynamically allocated list for this assignment that will handle these simple C++ simple types ( char, float, double, and bool). You are to provide for the member functions full, empty, top, push, pop, and size, as well as a default constructor that creates an empty stack of size 100, a constructor where the size is past in as a const int, and a destructor. You should also implement a copy constructor, an assignment operator (=), and overload the << operator to represent a pop operation to standard output. The size of the stack will be fixed upon definition (call of the constructor) and cannot be changed just to simplify the implementation More discussion on this later. 

Instructions:
1. Make a copy of the main.cpp and stack.cpp files attached in this assignment. Also create your makefile
2. The class template and definition are contained in one file stack.cpp.
3. All of the member functions go in the stack.cpp file.
4. Each type will need its own ostrea << operator overload.
5. Member function requirements

    a. full
    b. empty
