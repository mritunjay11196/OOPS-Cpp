// Map
// Lecture 39 Part 1

// maps are used to replicate associative arrays
// maps containe sorted key-value pair, in which each key is unique and cannot be changed, and it can be inserted or deleted but cannot be altered
// map always arrange it's keys in sorted order

// at()
// []
// size()
// empty()
// insert()
// clear()


#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> customer;
    
    customer[100] = "A";
    customer[200] = "B";
    customer[300] = "C";
    customer[400] = "D";
    customer[500] = "E";
    customer[600] = "F";
    customer[700] = "G";
    
    std::cout<<customer[100]<<std::endl;
    
    std::map<int, std::string>::iterator p1 = customer.begin();
    
    // DISPLAY ALL ELEMENTS
    while(p1!= customer.end())
    {
        std::cout<<p1->second<<" ";
        p1++;
    }
    std::cout<<std::endl;
    
    // INSERT
    customer.insert(std::pair<int, std::string>(800, "z"));
    std::map<int, std::string>::iterator p2 = customer.begin();
    while(p2!= customer.end())
    {
        std::cout<<p2->second<<" ";
        p2++;
    }
    std::cout<<std::endl;
}



