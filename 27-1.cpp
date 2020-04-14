// Exception handling (try, throw, catch)
// Lecture 27 Part 1

// exception is any abnormal behaviour, run time error (eg. wrong input)
// exceptions are off beat situation in your program where your program should be ready to handle it with appropriate response

// C++ provides a built-in error handling mechanism that is called exception handling
// using exception handling, you can more easily manage and response to run-time error

// try, throw, catch
// try -----> program statement that you want to monitor for exceptions are contained in a try block
// throw ---> if any exception occurs within the try block, it is thrown (using thrown)
// catch ---> the exception is caught, using catch, and then processed

// SYNTAX
/*
 
 try
 { }
 catch(type1 argument)
 { }
 catch(type2 argument)
 { }
 catch(typeN argument)
 { }
 
 */


#include <iostream>

int main()
{
    std::cout<<"welcome"<<std::endl;
    try
    {
        std::cout<<"try"<<std::endl;
        throw 5.3;
    }
    catch(int e)
    {
        std::cout<<"int Exception no.: "<<e<<std::endl;
    }
    catch(double e)
    {
        std::cout<<"double Exception no.: "<<e<<std::endl;
    }
    std::cout<<"last line"<<std::endl;
    
}
