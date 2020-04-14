// Abstract Class, any class which has even one pure virtual function
// Lecture 19 Part 1

#include <iostream>

// a do-nothing function is a special type of function where it does not have any body, not in or outside the class.
// a do-nothing function is a pure virtual function
// we can never make an object of an Abstract class

class Person                                // Person is an abstract class
{
public:
    virtual void function() = 0;            // do nothing function
    void funct()
    {
        std::cout<<"funct() of A"<<std::endl;
    }
};

// a class with this type of function can't be called since it's a bug
// BUT this person class can have a child class

//class Student : public Person
//{
//
//};

// here we can make an object of class B and can call function() which is inherited from class A
// BUT we need to stop this bug to happen !!

// now to stop this, we will have to override the function().

class Student : public Person
{
public:
    void function()
    {
        std::cout<<"function() of B"<<std::endl;
    }
};


int main()
{
    Student s1;
    s1.Student::function();
//s1.Person::function();            // Error
    s1.Person::funct();             // we can use the funct() of class by Inherting it to class Student
    
}
