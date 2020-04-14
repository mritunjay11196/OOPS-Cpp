// Friend function
// Lecture 12 Part 4

// member function of one class can become friend to another class

#include <iostream>

class A
{
public:
    void fun1()
    {
        std::cout<<"fun1"<<std::endl;
    }
    void fun2()
    {
        std::cout<<"fun2"<<std::endl;
    }
};

class B
{
//    friend class A                            // this will friend all the methods of class A
    friend void A::fun1();
    friend void A::fun2();
};


int main()
{
    B b;
    fun1();
    
}

