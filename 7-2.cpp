// Classes and Objects
// Lecture 7 Part 2

#include <iostream>

class ComplexNumber
{
private:
    int x;                                              // instance member variable, aka (attributes, data members, fields, properties)
    int y;                                              // instance member variable
public:
    ComplexNumber() {this->x = 0; this->y = 0;}                     // constructor
    ComplexNumber(int x, int y) {this->x = x; this->y = y;}         // constructor
    
    void get_data()                                                 // instance member function, aka (methods, procedures, cations, operations, services)
    {
        std::cout<<"x: "<<this->x<<", y: "<<this->y<<std::endl;
    }
    ComplexNumber add(ComplexNumber c)                              // instance member function
    {
        ComplexNumber temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
    void show()                                                     // instance member function
    {
        std::cout<<"x: "<<x<<"\n";
        std::cout<<"this->x: "<<this->x<<"\n";
    }
    
};


int main()
{
    ComplexNumber c1(3, 4);
    ComplexNumber c2(2, 6);
    ComplexNumber c3;
    c3 = c1.add(c2);
    c1.get_data();
    std::cout<<"\n";
    
    
    c1.show();
    
    
}

