// Constructor and Destructor in Inheritance
// Lecture 14 Part 1

// calling of constructor and destructor is as follows:
// think of class A as a bigger box and class B as a smaller box which is inside A. Now if we throw an arrow then the arrow will see box 'A' first (constructor) and then 'B'. And whole the arrow is comming out (destructor) the arrow will see the box 'B' first and after that it will see 'A'

#include <iostream>

class A
{
public:
    A()
    {
        std::cout<<"constructor of class A"<<std::endl;
    }
    ~A()
    {
        std::cout<<"destructor of class A"<<std::endl;
    }
};

class B : public A
{
public:
    B()
    {
        std::cout<<"constructor of class B"<<std::endl;
    }
    ~B()
    {
        std::cout<<"destructor of class B"<<std::endl;
    }
};


int main()
{
    B b_obj;
    
}
