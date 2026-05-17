#include<iostream>

using namespace std;

int factorial(int N) {
    if(N == 1) return 1;
    return N * factorial(N - 1);
}

int fibonacci(int N) {
    if(N == 0) return 0;
    else if(N == 1) return 1;
    return fibonacci(N - 1) + fibonacci(N - 2);
}

bool linearSearchAux(vector<int> const &values, int target, int position) {
    if(position >= values.size()) return false;
    if(values[position] == target) return true;
    return linearSearchAux(values, target, position + 1);
}

bool linearSearch(vector<int> values, int target) {
    // if(values.empty()) return false;
    // if(values[0] == target) return true;
    // return linearSearch(vector<int>(values.begin()+1, values.end()), target);
    if(values.empty()) return false;
    return linearSearchAux(values, target, 0);
}


int main() {
    // int n = 5;
    // cout << fibonacci(n);
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8};
    cout << boolalpha;
    cout << linearSearch(v, 100);
}