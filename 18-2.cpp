// Virtual Function
// Lecture 18 Part 2

// we write 'virtual' for late binding
// always use virtual function in the parent class if the same function name is used in the child class

#include <iostream>

class A
{
public:
    virtual void funct_1()
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
};


int main()
{
    A* p1;
    A* p2;
    A obj_a;
    B obj_b;
    
    p1 = &obj_a;                // pointer to class A can point to it's descendants too
    p2 = &obj_b;
    
    p2->funct_1();              // this will call funct_1 of class B (late binding)
    obj_b.funct_1();            // this will call funct_1 of class B, FUNCTION OVERRIDING
    
    return 0;
}
