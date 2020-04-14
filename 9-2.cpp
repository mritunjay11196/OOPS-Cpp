// Constructor
// Lecture 9 Part 2

// parametrised constructor
// if we make even one constructor, then compiler will not make any pre written default constructor

#include <iostream>

class Complex
{
private:
    int a, b;
public:
    Complex()
    {
        this->a = 0;
        this->b = 0;
    }
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

int main()
{
    Complex c1;

    Complex c3(4, 5);
    // OR
    Complex c4 = Complex(4, 5);
    
}
