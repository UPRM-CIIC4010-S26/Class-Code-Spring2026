#include "stack.hpp"
#include<iostream>
#include<string>

using namespace std;

class Node {
    private:
        char value;
        Node* next;
    public:
        Node(char value, Node* next) {
            this->value = value;
            this->next = next;
        }
        Node(char value) {
            this->value = value;
            this->next = nullptr;
        }
        Node() {
            this->value = ' ';
            this->next = nullptr;
        }
        char getValue() const {return value;}
        Node* getNext() const {return next;}
        void setValue(char c) {this->value = c;}
        void setNext(Node *n) {this->next = n;}
        void clear() {
            this->value = ' ';
            this->next = nullptr;
            delete next;
        }


};

class nodeStack : public StackInterface
{
private:
    Node* top;
    int currentSize;
    
public:
    nodeStack() {
        this->top = nullptr;
    }
    int size() override {
        return currentSize;
    }
    bool isEmpty() override {
        return currentSize == 0;
    }
    void clear() override {
        while(!isEmpty()) this->pop();
    }
    char peek() override {
        return top->getValue();
    }
    void push(char c) override {
        Node* newTop = new Node(c, top);
        this->top = newTop;
        currentSize++;
    }

    char pop() override {
        char topValue = this->top->getValue();
        Node* toRemove = this->top;
        this->top = this->top->getNext();
        toRemove->clear();
        currentSize--;
        return topValue;
    }

    string toString() override {
        string str = "";
        Node* temp = this->top;
        while (temp != nullptr) {
            str += temp->getValue();
            str += "->";
            temp = temp->getNext();
        }
        return str.substr(0, str.length() - 2);
    }
};

