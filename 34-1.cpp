// Array STL
// Leture 34 Part 1

// array is a liner collection of similar elements
// array container in STL provides is implementation of static array

// some important member functions
// at
// []
// front()
// back()
// fill()
// swap()       swaps the ontent of two arrays pf same size and type
// size()
// begin()
// end()

#include <iostream>
#include <array>

void display(std::array<int, 6> a)
{
    for(int i=0; i<a.size(); i++)
        std::cout<<a.at(i)<<" ";
    std::cout<<std::endl;
}


int main()
{
    std::array <int, 6> arr1 = {13, 36, 22, 43, 87, 19};
    
    std::cout << arr1.at(3) << std::endl;      // 43
    std::cout << arr1[3] << std::endl;         // 43
    std::cout << arr1.front() << std::endl;    // 13
    std::cout << arr1.back() << std::endl;     // 19
    
    // fill()
    arr1.fill(3);                              // {3, 3, 3, 3, 3, 3}
    display(arr1);
    
    // swap()
    std::array <int, 6> arr2 = {1, 2, 3, 4, 5, 6};
    std::array <int, 6> arr3 = {10, 20, 30, 40, 50, 60};
    arr2.swap(arr3);
    display(arr2);
    display(arr3);
    
}

