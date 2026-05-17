#include "vectorStack.cpp"
#include "nodeStack.cpp"
#include<iostream>

using namespace std;

int main() {
    StackInterface* stack = new nodeStack();

    for(char i = 'a'; i < 'h'; i++) {
        stack->push(i);
    }

    cout << stack->toString() << endl;

    cout << stack->peek() << endl;
    cout << stack->pop() << endl;

    cout << stack->toString() << endl;

    cout << stack->peek() << endl;
}