// Constructor
// Lecture 9 Part 3

// copy constructor

#include <iostream>

class Complex
{
private:
    int a, b;
public:
    Complex(int a, int b) {this->a = a; this->b = b;}
    Complex(Complex &c) {a = c.a; b = c.b;}                         // copy constructor
    
    void getValue()
    {
        std::cout<<"a: "<<a<<", b: "<<b<<"\n";
    }
};

int main()
{
    Complex c1(2, 4);
    Complex c2(c1);
    c2.getValue();
}
