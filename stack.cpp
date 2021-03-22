// Created by David A Gaitros on 10/15/19.
// ********************************************************************
// * Name: Stack Class                                                *
// * Description:  A template Stack class designed to be used with    *
// *   any simple C++ type to include floating point, double          *
// *   floating point, character, and boolan.                         *
// *   The stack pointer, as is the convention, points to the last    *
// *   or highest element in the array. So if you allocate 100        *
// *   elements of type "T" then the first empty element will be 99.  *
// * Author: Dr. David A. Gaitros                                     *
// * Date: January 19, 2019                                           *
// ********************************************************************
#include <iostream>
using namespace std;
const int DEFAULTSIZE=100;
template <class T>
class Stack {
public:
    Stack();                    // Default Constructor, stack is size 100.
    Stack(const int size);      // Constructor, creates stack of size "size"
    Stack(const Stack<T> & item);// Copy constructor
    bool Full();                // Return true if the stack is full
    bool Empty();               // Return true if the stack is empty
    int Size();                 // Return the size of the stack
    T Top();                    // Returns the top element, does not pop it.
    bool Push (const T item);   // Put an item on the stack.
    bool Pop();                 // Pop an item off and display to std out
    friend ostream &operator <<(ostream & os, Stack<T> &s)
    {
        if (!s.Empty()){
            s.Pop();
            return os;
        }
        else {
          cout << "Empty Stack";
        }
    };
private:
    T * _stack;                 // The "stack"
    int _size;                  // The number of elements the stack can hold
    int _top;                   // Points to the first empty node
};

// * Function Name: Stack Default Constructor
// * Description: Stack Default Constructor with the default declarations
// * Parameter Description: none
// * Date: 4/10/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
template<class T>
Stack<T>::Stack():_top(0), _size(DEFAULTSIZE), _stack(new T[_size]) {
    // variables declared with : for neatness
}

// * Function Name: Stack Constructor
// * Description: Stack Constructor introducing size
// * Parameter Description: size: size of the stack
// * Date: 4/10/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
template<class T>
Stack<T>::Stack(const int size): _top(0), _size(size) {
    _stack = new T[_size]; //can't be declared after :
}

// * Function Name: Stack Copy Constructor
// * Description: Stack Copy Constructor introducing an object
// * Parameter Description: item: object to be copied
// * Date: 4/10/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
template <class T>
Stack<T>::Stack(const Stack<T> &item): _size(item._size), _top(item._top) {
    _stack = new T[_size];
    for(int index = 0; index <= _top; index++) {
        _stack[index] = item._stack[index];
    }
}

// * Function Name: Full Checker Function
// * Description: Checks to see if the stack is full
// *              returns true if full and false if not
// * Parameter Description: none
// * Date: 4/10/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
template <class T>
bool Stack<T>::Full() {
    if (_top == _size){
        return true;
    }
    else{
        return false;
    }
}

// * Function Name: Empty Checker Function
// * Description: Checks to see if the stack is empty
// *              returns true if empty and false if not
// * Parameter Description: none
// * Date: 4/10/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
template <class T>
bool Stack<T>::Empty() {
    if (_top == 0){
        return true;
    }
    else{
        return false;
    }
}

// * Function Name: Get Size Function
// * Description: returns size of the stack from private elements
// * Parameter Description: none
// * Date: 4/10/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
template <class T>
int Stack<T>::Size() {
    return _size;
}

// * Function Name: Get Top Function
// * Description: returns top of the stack from private elements
// * Parameter Description: none
// * Date: 4/10/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
template <class T>
T Stack<T>::Top() {
    return _stack[_top];
}

// * Function Name: Push Function
// * Description: puts an element on the Stack, Issues an error message if you try to Push an
// *              element on a full stack.
// * Parameter Description: none
// * Date: 4/10/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
template <class T>
bool Stack<T>::Push(const T item) {
    if (Full()){
        cout << "Stack Overflow!\n";
        return 0;
    }
        _top++;
        _stack[_top] = item;
        return 1;
}

// * Function Name: Pop Function
// * Description: prints the top element from the Stack and removes it.
// * Parameter Description: none
// * Date: 4/10/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
template <class T>
bool Stack<T>::Pop(){
    if (Empty()){
        cout << "Empty Stack\n";
        return 0;
    }
    else{
        cout << _stack[_top] << endl;
        --_top;
        return 1;
    }
}

