// Friend function
// Lecture 12 Part 1

// friend function is not a member function of a class to which it is a friend
// friend function is declared in the class with friend keyword
// it must be defined outside the class to which it is friend
// friend function can access any member of the class to which it is friends but can not access them directly
// it has no caller object
// it should not be defined with membership label

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
    friend void add(Complex c);
};

void add(Complex c)
{
    std::cout<<c.a + c.b<<std::endl;
    
}

int main()
{
    Complex c1;
    c1.setData(2, 5);
    
    add(c1);                // calling friend fucntion
}
