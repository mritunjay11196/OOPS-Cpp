// Operator Overloading
// Lecture 11 Part 2

// setting unary operator

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
    
    Complex operator-()
    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
    
    
};

int main()
{
    Complex c1, c2;
    c1.setData(3, 4);
    c1.getData();
    
    c2 = -c1;                               // c2 = c1.operator-()
    c2.getData();
}
