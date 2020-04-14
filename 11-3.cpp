// Operator Overloading
// Lecture 11 Part 3

// setting incremental(++) operator

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
    void getData()
    {
        std::cout<<"a: "<<a<<", b: "<<b<<std::endl;
    }
    
    Complex operator++()                // pre increment
    {
        Complex temp;
        temp.a = a+1;
        temp.b = b;
        return temp;
    }
    
    Complex operator++(int)                // post increment, return type must be 'int'
    {
        Complex temp;
        temp.a = a;
        temp.b = b;
        return temp;
    }
    
    
};


int main()
{
    Complex c1, c2, c3;
    c1.setData(3, 8);
    std::cout<<"original: ";
    c1.getData();
    
    c2 = ++c1;
    std::cout<<"pre increment: ";
    c2.getData();
    
    c3 = c1++;
    std::cout<<"post increment: ";
    c3.getData();
}
