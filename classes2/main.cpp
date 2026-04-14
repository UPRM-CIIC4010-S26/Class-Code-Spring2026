#include<iostream>
#include<string>

using namespace std;

int && sum(int &a, int &b) {
    return a + b;
}

int main() {
    int a = 10;
    int b = 23;
    int c = sum(a, b);
}