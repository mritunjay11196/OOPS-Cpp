// string
// Lecture 40 Part 1

// the string class is a specialization of a more general template class called basic_string
// since defining a class in c++ is creating a new data type, string is deriveddata type
// this means operator can be overloaded for the class

// assign()
// append()
// insert()
// replace()
// erase()
// find()
// rfind()       reverse find
// compare()
// c_str()
// size()


#include <iostream>
#include <string>

int main()
{
    // ASSIGN
    std::string s1;
    s1.assign("Hello");
    std::cout<<s1<<std::endl;
    
    //INSERT
    s1.insert(2, "123");
    std::cout<<s1<<std::endl;
    
    s1.insert(2, 5, 'Z');
    std::cout<<s1<<std::endl;
    
    // FIND
    std::string s2 = "A, B, C, D, E, F, G";
    int i = s2.find('F');
    std::cout<<i<<"\n";
}
