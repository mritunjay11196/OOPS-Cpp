// namespace
// Lecture 29 Part 1

// namespace is a container for identifiers
// it puts the names of it's members in a distinct space so that they don't conflict with the names in other namespaces or global namespace.
// namespace definition does't terminate with a semicolon like in class definition
// we can use an alias name for our namespace name for ease of use, eg: namespace ms = mySpace;
// there can be unnamed namespaces too
// namespaces definition can be extended over multiple files, they are not redefined or overridden

#include <iostream>

namespace mySpace{
int a = 4;
void f1();
class A
{
public:
    static void fun1();
    
};
}

void mySpace::A::fun1()
{
    std::cout<<"fun1\n";
}

void mySpace::f1()
{
std::cout<<"f1\n";
}

int main()
{
    std::cout<<mySpace::a<<std::endl;
    mySpace::f1();
    mySpace::A::fun1();
}
