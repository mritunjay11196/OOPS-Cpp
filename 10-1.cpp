// Destructor
// Lecture 10 Part 1

// destructor is an instance member functions of a class
// the name of the destructor is same as the name of a class but preceded by tilda(~) symbol
// destructor can never be static
// destructor have no return type
// destructor take no argument, hence no overloading is possible
// destructor doesn't destroy the object but it is the last function to be called after which object destroys itself

#include <iostream>

class Complex
{
private:
    int a, b;
public:
    Complex() {std::cout<<"constructor\n";}
    ~Complex() {std::cout<<"destructor\n";}
};

int main()
{
    Complex c1;
}
