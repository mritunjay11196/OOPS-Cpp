// Tuple in STL
// Lecture 36 Part 1

// just like in pair, we can pair two heterogeneous objects, in tuple we can pair multiple objects
// it is not a container
// in tuple we can pair multiple objects

#include <iostream>

int main()
{
    std::tuple<std::string, int, int> t1;
    t1 = std::make_tuple("MJ", 15, 1);
    
    std::cout << std::get<0>(t1) << std::endl;
}



