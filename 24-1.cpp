// Primitive type to Class type
// Lecture 24 Part 1

// Primitive Type ----> int, float, char, double
// Class Type --------> any class we make

// SOLUTION IS CONSTRUCTOR

#include <iostream>

class Complex
{
private:
    int a, b;
public:
    Complex() {}                // default constructor
    Complex(int x)
    {
        this->a = x;
        this->b = 0;
    }
    
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    
    void showData()
    {
        std::cout<<a<<" "<<b<<std::endl;
    }
};

int main()
{
    Complex c1;
    int x = 4;
    c1 = x;                     // constructor will be made for the lValue
    c1.showData();
    
}

