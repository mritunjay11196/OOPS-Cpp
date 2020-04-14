// List
// Lecture 38 Part 1

// list class supports a bidirectional, liner list
// vector supports random access but a list can be accessed sequentially only
// list can be accessed front to back or back to front

// size()
// sort()
// push_back()
// push_front()
// pop_back()
// pop_front()
// reverse()
// remove()
// clear()


#include <iostream>
#include <list>

int main()
{
    std::list <int> l1 = {10, 5, 30};
    std::list <std::string> l2 = {"India", "Delhi", "Lajnatnagar"};
    
    std::list <int>::iterator i1 = l1.begin();
    
    // DISPLAY
    while(i1!=l1.end())
    {
        std::cout<<*i1<<" ";
        i1++;
    }
    std::cout<<"\n";
    
    // SIZE
    std::cout<<l1.size()<<std::endl;
    
    // SORT
    l1.sort();
    std::list <int>::iterator it = l1.begin();
    while(it!=l1.end())
    {
        std::cout<<*it<<" ";
        it++;
    }
    std::cout<<"\n";
    
    // REMOVE
    l1.remove(5);
    std::list <int>::iterator re = l1.begin();
    while(re!=l1.end())
    {
        std::cout<<*re<<" ";
        re++;
    }
    std::cout<<"\n";
}

