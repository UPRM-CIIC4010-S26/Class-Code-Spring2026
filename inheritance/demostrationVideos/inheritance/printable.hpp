#pragma once
#include <string>

class Printable {
public:
    virtual std::string toString() = 0; // Pure virtual function to be implemented by derived classes
};