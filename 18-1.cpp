// Virtual Function
// Lecture 18 Part 1

// base class pointer can point on the object of any of it's descendant class, but its converse is not true

#include <iostream>

class A
{
public:
    void funct_1()
    {
        std::cout<<"Function_of_A"<<std::endl;
    }
};

class B : public A
{
public:
    void funct_1()                      // function overriding, same function name as of parent class
    {
        std::cout<<"Function_of_B"<<std::endl;
    }
    void funct_2()                      // function overriding, same function name as of parent class
    {
        std::cout<<"Function2_of_B"<<std::endl;
    }
};


int main()
{
    A* p1;
    A* p2;
    
    A obj_a;
    B obj_b;
    
    p1 = &obj_a;                // pointer to class A can point to it's descendants too
    p2 = &obj_b;
    
    p2->funct_1();              // this will call funct_1 of class A
//    p2->funct_2();            // error
    obj_b.funct_1();            // this will call funct_1 of class B, FUNCTION OVERRIDING
    
    return 0;
}
