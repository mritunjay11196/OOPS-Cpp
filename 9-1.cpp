// Constructor
// Lecture 9 Part 1

// constructor is a member function of a class
// the name of the constructor is same as the name of the class
// it has no return type, so we must never use return keyword
// it must be an instance member function, that is, it can never be static
// constructor is implicitly involked when an object is created
// constructor is used to solve problem of initialisation

#include <iostream>

class Complex
{
private:
    int a;
    int b;
public:
    Complex()
    {
        std::cout<<"Constructor\n";
    }
};

int main()
{
    Complex c1;
    Complex c2;
    Complex c3;                 // constructor will run 3 times
}

