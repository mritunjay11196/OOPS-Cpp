// Operator Overloading
// Lecture 11 Part 1

// when an operator is overloaded with multiple jobs, it is known as operator overloading
// it is a way to implement compile time polymorphism
// we can not overload 'sizeof' and '?:' operator

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
    
    Complex add(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};


int main()
{
    Complex c1, c2, c3, c4;
    c1.setData(3, 4);
    c2.setData(5, 6);
    
    //c3 = c1 + c2;                         // '+' operator needs int operands, hence we will get error
    
    c3 = c1.add(c2);
    c3.getData();
    
    c4 = c1.operator+(c2);                  // same as, "c4 = c1 + c2"
    //c4 = c1 + c2;
    c4.getData();
    
}
