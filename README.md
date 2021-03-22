# Stack-Implementation (Object Oriented Programming Assignment)

You are to write a C++ Stack class template (see stack.cpp) which implements a stack. You must implement your own dynamically allocated list for this assignment that will handle these simple C++ simple types ( char, float, double, and bool). You are to provide for the member functions full, empty, top, push, pop, and size, as well as a default constructor that creates an empty stack of size 100, a constructor where the size is past in as a const int, and a destructor. You should also implement a copy constructor, an assignment operator (=), and overload the << operator to represent a pop operation to standard output. The size of the stack will be fixed upon definition (call of the constructor) and cannot be changed just to simplify the implementation. More discussion on this later. 


    Distinguish  between  a  function  template  and  a  concrete  function:  definition,  implementation, and file structure conventions • Demonstrate  correct  notation  and  syntax  for  defining  and  implementing  a  function  template • Use a friend to create an overload operator for the << operator • State the rules compilers use to instantiate a function template • Test a function template for correct syntax • Test a function template for correct behavior •Test a function template for use with multiple types.  • Test the overload << operations.  
    
    
 1. You are to make a copy of the main.cpp and stack.cpp files attached to this assignments. You will need to add additional code to these files and create your own makefile.
 2. With templates you do not produce two file ( .h and .cpp). Instead the class template definition and implementation are contained in one file. In this case stack.cpp.
 3. I would suggest you comment out any member function that you have not implemented in th main routine to help in testing. 
 4. All of the member function implementations (full, empty, top, push, pop, and size) will go in the stack.cpp file.   Note there is no Integer type.   
 5. Each type (char, float, double, and bool) will need it’s own ostream << operator overload.   These will be placed in the main routine.  Look for the comments on where to place them.  
 6. Member Function requirements:

    as;ldfkjasd;lfkjasdf
