// Functional Template
// Lecture 20 Part 1

// for diffrent data types, for example comparison between int and double

#include <iostream>

template <class X, class Y>
X big(X a, Y b)
{
    if(a>b)
        return a;
    return b;
}

int main()
{
    std::cout<<big(3.4, 3.5)<<"\n";
}


