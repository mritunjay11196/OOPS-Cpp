// Functional Template
// Lecture 20 Part 1

// SYNTAX
//template <class 'placeholder name (new data type name)'>,  placeholder means any name instead of normal data type


#include <iostream>

template <class X>
X big(X a, X b)                   // funtion for int
{
    if(a>b)
        return a;
    return b;
}

int main()
{
    std::cout<<big(22, 4)<<"\n";
    std::cout<<big(3.4, 5.1)<<"\n";
    
}

// to make a single version of all this is made using 'templates'
