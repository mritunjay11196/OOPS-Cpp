// Class type to Class type
// Lecture 26 Part 1

// Primitive Type ----> int, float, char, double
// Class Type --------> any class we make

// SOLUTION IS CASTING OPERATOR

#include <iostream>

class Product
{
private:
    int m, n;
public:
    void setData(int m, int n)
    {
        this->m = m;
        this->n = n;
    }
    
    int getM()
    {
        return this->m;
    }
    int getN()
    {
        return this->n;
    }
};


class Item
{
private:
    int a, b;
public:
    Item() {}                           // default constructor
    Item(Product p)
    {
        this->a = p.getM();
        this->b = p.getN();
    }
    
    void showData()
    {
        std::cout<<a<<" "<<b<<std::endl;
    }
};




int main()
{
    Item i1;
    Product p1;
    p1.setData(3, 4);
    
    i1 = p1;                            // contructor will be implimented for lValue
    i1.showData();
    
    
}
