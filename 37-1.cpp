// Vector
// Lecture 37 Part 1

// capacity of a vector keeps on doubling as the size of the verctor overflows

// at(<position>)
// [<position>]
// push_back(<data>)
// pop_back()
// front()
// back()
// begin()    iterator
// end()      iterator
// capacity()    total size
// size()        number of elements
// clear()
// std::vector<int>::iterator
// std::sort(vector.begin(), vector.end())
// it = std::find(vector.begin(), vector.end())


#include <iostream>
#include <vector>

void display(std::vector<int> v)
{
    for(int i=0; i<v.size(); i++)
        std::cout<<v.at(i)<<" ";
    std::cout<<"\n";
}

int main()
{
    std::vector<int> v1 {2, 4, 6, 8};
//    std::cout<<v1.capacity()<<std::endl;
//    std::cout<<v1.size()<<std::endl;
    v1.push_back(10);
//    std::cout<<v1.capacity()<<std::endl;
//    std::cout<<v1.size()<<std::endl;
    v1.push_back(10);
    v1.push_back(12);
    v1.push_back(15);
    v1.push_back(19);
    std::cout<<v1.capacity()<<std::endl;
    std::cout<<v1.size()<<std::endl;
    display(v1);
    
    std::vector<char> c1 {'A', 'B', 'C'};
    char c = c1.back();
    c1.pop_back();
//    std::cout<<c1.back()<<std::endl;
//    std::cout<<c<<std::endl;
    
    // ITERATOR
    std::vector<int>::iterator it = v1.begin();
    v1.insert(it+2, 111111);                            // it + 2 ------> 3rd value
    display(v1);
    
}
