// Deep copy and Shallow copy
// Lecture 23 Part 1

// What is Copy? or How we can create a copy of object?
// copy is done by two type of methods:
// 1. Copy constructor
// 2. implicit copy assignment operator

// SHALLOW COPY --> creating copy of object by copying data of all member variables as it is
// DEEP COPY -----> creating an object by copying data of another object along with the values of memory resources resides outside the object but handled by that object

#include <iostream>

class A
{
private:
    int a, b;
    int* p;
    
public:
    A()
    {
        p = new int;
    }
    
    void setData(int a, int b, int z)
    {
        this->a = a;
        this->b = b;
        *p = z;
    }
    
    void showData()
    {
        std::cout<<a<<"  "<<b<<"  "<<*p<<std::endl;
    }
    
    ~A()
    {
        delete p;
    }
};


int main()
{
    A a1;
    a1.setData(3, 6, 4);
    
    A a2 = a1;                      // copy constructor is called, SHALLOW COPY
    a2.showData();
    // here, data of a and b, and address of p will be copied in a2 properly but since it is a shallow copy, the data of p will be not copied and because of this p of object a2 and p of object a1 will point towards the same data box.
    // this is a bug since changing data of *p of object a1 will automatically change the *p of object a2.
    
    
    A a3;
    a3 = a1;                        // implicit copy assignment operator is called
    a3.showData();

    
}
