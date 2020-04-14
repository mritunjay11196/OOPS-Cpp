// Classes and Objects
// Lecture 7 Part 1

//


#include <iostream>

class Complex
{
private:
    int a, b;
public:
    void set_data(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void show_data()
    {
        std::cout<<a<<"+"<<b<<"i"<< std::endl;
    }
};


int main()
{
    Complex c1;
    c1.set_data(2, 5);
    c1.show_data();
}
