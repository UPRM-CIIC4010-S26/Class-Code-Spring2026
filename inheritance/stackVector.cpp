#include<iostream>
#include<vector>
#include<string>
#include"stack.hpp"

using namespace std;

class StackVector: public stackInterface {
    private:
        vector<char> data;
    public:
        StackVector() { }
        int size() override {
            return data.size();
        }
        bool isEmpty() override {
            return data.empty();
        }
        void clear() override {
            data.clear();
        }
        char peek() override {
            return data.back();
        }
        void push(char c) override {
            data.push_back(c);
        }
        char pop() override {
            char top = peek();
            data.pop_back();
            return top;
        }

        string toString() {
            string str = "{ ";
            for(char c: data){
                str += c;
                str += " ";
            }
            str += "}";
            return str;
        }
};

int main() {
    StackVector* stack = new StackVector();

    for(char i = 'a'; i < 'h'; i++) {
        stack->push(i);
    }

    cout << stack->toString() << endl;

    cout << stack->peek() << endl;
    cout << stack->pop() << endl;

    cout << stack->toString() << endl;

    cout << stack->peek() << endl;
}


