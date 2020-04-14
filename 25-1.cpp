// Class type to Primitive type
// Lecture 25 Part 1

// Primitive Type ----> int, float, char, double
// Class Type --------> any class we make

// SOLUTION IS CASTING OPERATOR

#include <iostream>

class Complex
{
private:
    int a, b;
    
public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    
    void showData()
    {
        std::cout<<a<<" "<<b<<std::endl;
    }
    
    operator int()                                  // CASTING OPERATOR
    {
        return this->a;
    }
};

int main()
{
    Complex c1;
    c1.setData(3, 4);
    
    int x;                  // x = c1.operator int()
    x = c1;
    std::cout<<x<<"\n";
}

