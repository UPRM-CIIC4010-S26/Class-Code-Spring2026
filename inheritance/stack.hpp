#ifndef STACK_H
#define STACK_H
/*
* This is the stack class.
*
* A stack is a data structure that follows the Last In First Out (LIFO)
principle.
* This means that the last element added to the stack will be the first
one to be removed.
*
* For example:
* Say we have the following stack: {a, b, c, d, e}
* The top of the stack is 'e' and the bottom is 'a'
.
* If we pop the stack, we will remove 'e' and the stack will look like
this: {a, b, c, d}
* If we push 'f' to the stack, it will look like this: {a, b, c, d, f}
*
* So essentially, that stack is a data structure that focuses on adding
and removing at
* a specific spot, which is the top of the stack.
*
* Note: The top of the stack in this example is the last element, but
it could
* also be the first element depending on the implementation. The
important thing is that
* whichever position we pick, be it the last or fisrt position, we
consistently use that position.
*/
class stackInterface
{
public:
    virtual char pop() = 0; // Removes and returns the top element of
    virtual void push(char c) = 0; // Adds an element to the top of the stack
    virtual char peek() = 0; // Returns the top element of the stack without removing it
    virtual int size() = 0; // Returns the number of elements in the stack
    virtual bool isEmpty() = 0; // Returns true if the stack is empty, false otherwise
    virtual void clear() = 0; // Clears the stack
};
#endif