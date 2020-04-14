// Friend function
// Lecture 12 Part 3


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
    
    friend Complex operator-(Complex);
};

Complex operator-(Complex c1)
   {
       Complex temp;
       temp.a = -c1.a;
       temp.b = -c1.b;
       return temp;
   }

int main()
{
    Complex c1, c2;
    c1.setData(3, 4);
    c2 = -c1;                               //c3 = operator-(c1)
    c2.getValue();
}


