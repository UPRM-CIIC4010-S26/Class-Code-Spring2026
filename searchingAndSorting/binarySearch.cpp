#include<iostream>

using namespace std;


bool binarySearch(vector<int> values, int target) {
    if(values.empty()) return false;
    int mid = values.size()/2;
    if(values[mid] == target) return true;
    else if(values[mid] < target) return binarySearch(vector<int>(values.begin() + mid + 1, values.end()), target);
    return binarySearch(vector<int>(values.begin(), values.begin() + mid), target);
}

int binarySearchHelper(vector<int> values, int target, int start, int end) {
    // if(start == end && values[start] != target) return -1;
    if(start > end) return -1;
    int mid = (end + start)/2;
    if(values[mid] == target) return mid;
    else if(values[mid] < target) return binarySearchHelper(values, target, mid + 1, end);
    else return binarySearchHelper(values, target, start, mid - 1);
}
int binarySearch1(vector<int> values, int target) {
    if(values.empty()) return -1;
    return binarySearchHelper(values, target, 0, values.size() -1 );
}


int main() {
    vector<int> values = {1, 3, 5, 7, 9, 10, 15, 29};

    int target = 100;
    cout << boolalpha;
    cout << binarySearch1(values, target);
}