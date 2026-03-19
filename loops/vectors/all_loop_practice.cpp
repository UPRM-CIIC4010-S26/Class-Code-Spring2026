#include<iostream>
#include<vector>
#include<string>

using namespace std;
// Define a class Person
class Person {
    private:
        string name;
        int age;
    public:
        Person(string n, int a) : name(n), age(a) {}  // Constructor
    
        // Function to display person details
        void display() const {
            cout << "Name: " << name << ", Age: " << age << endl;
        }   
        // Getters
        string getName() {return name;}
        int getAge() {return age;}

        // Setters
        void setName(string n) {this->name = n;}
        void setAge(int a) {this->age = a;}

};

void updateAge(vector<Person> &people) {
    // Using a while loop

    // Using a for loop
}

void updateAge(vector<Person> &people, int amount) {
    // Using iterator
}
// Removes all even values from the vector
// {1, 2, 3, 4, 5} -> {1, 3, 5}
void removeEven(vector<int> &values) {

    // {1, 2, 3, 4, 5, 6, 8, 10, 13}// 9
    // {1, 3, 4, 5, 6, 8, 10, 13}

    for(int i = values.size() - 1; i >= 0; i--) {
        if(values[i] % 2 == 0) {
            values.erase(values.begin() + i);
        }

    }
    // for(auto it = values.begin(); it!= values.end(); it++) {
    //     // values[i]
    //     if( (*it) % 2 == 0) {
    //         values.erase(it);
    //         it--;
    //     }
    // }

}


int main() {
    vector<Person> people = {Person("Carlos", 50), Person("Ana", 12), Person("Pedro", 32)};

    for(auto it = people.begin(); it != people.end(); ++it) {
        it->display();
    }
    updateAge(people, 5);
    cout << "After update: " << endl;
    for(Person person: people) {
        person.display();
    }


    vector<int> numbers = {2, 2, 2,2, 3, 2, 2, 2, 5 };
    for(int i: numbers) {
        cout << i << " ";
    }
    cout << endl;
    removeEven(numbers); // {1, 3, 5, 13}
    for(int i: numbers) {
        cout << i << " ";
    }
    cout << endl;
}