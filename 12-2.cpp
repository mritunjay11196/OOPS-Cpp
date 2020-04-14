// Friend function
// Lecture 12 Part 2

// friend fucntion can become friend to more than one class

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
    void getValue()
    {
        std::cout<<"a: "<<a<<", b: "<<b<<"\n";
    }
    
    friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex c1, Complex c2)
   {
       Complex temp;
       temp.a = c1.a + c2.a;
       temp.b = c1.b + c2.b;
       return temp;
   }

int main()
{
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1 + c2;                               //c3 = operator+(c1, c2)
    c3.getValue();
}


