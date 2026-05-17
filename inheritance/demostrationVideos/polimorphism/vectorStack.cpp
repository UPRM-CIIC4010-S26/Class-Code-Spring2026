#include<iostream>
#include<vector>
#include<string>
#include"stack.hpp"

using namespace std;

class VectorStack : public StackInterface {
    private:
        vector<char> data;
    public:
        VectorStack() { }
        char peek() override {
            return data.back();
        }
        void push(char c) override {
            data.push_back(c);
        }
        char pop() override {
            char topValue = peek();
            data.pop_back();
            return topValue;
        }
        int size() override {
            return data.size();
        }
        bool isEmpty() override {
            return data.empty();
        }
        void clear() override {
            data.clear();
        }
        string toString() override {
            string str = "{ ";
            for(char c: data){
                str += c;
                str += " ";
            }
            str += "}";
            return str;
        }
};

// int main() {
//     VectorStack* stack = new VectorStack();

//     for(char i = 'a'; i < 'h'; i++) {
//         stack->push(i);
//     }

//     cout << stack->toString() << endl;

//     cout << stack->peek() << endl;
//     cout << stack->pop() << endl;

//     cout << stack->toString() << endl;

//     cout << stack->peek() << endl;
// }


