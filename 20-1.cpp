// Functional Template
// Lecture 20 Part 1

// The keyword 'template' is used to define function template and class template
// it is a way to make your function or class generalize as far as data type is concern

#include <iostream>

int big(int a, int b)                   // funtion for int
{
    if(a>b)
        return a;
    return b;
}

double big(double a, double b)          // function for double
{
    if(a>b)
        return a;
    return b;
}


int main()
{
    std::cout<<big(3, 4)<<"\n";
    std::cout<<big(3.4, 3.1)<<"\n";
    
}

// to make a single version of all this is made using 'templates'
