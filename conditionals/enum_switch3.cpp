#include <iostream>
using namespace std;

// Enum with overridden values
enum class Severity { Low, Medium, High};
enum class SugarLevel {Low , Medium, High};

int main() {
    // Severity level = Low;
    Severity level = Severity::Medium;

    switch (level) {
        case Severity::Low:
            cout << "Low severity: Take basic precautions." << endl;
            break;
        case Severity::Medium:
            cout << "Medium severity: Be cautious." << endl;
            break;
        case Severity::High:
            cout << "High severity: Take immediate action!" << endl;
            break;
        default:
            cout << "Unknown severity level." << endl;
    }

    return 0;
}