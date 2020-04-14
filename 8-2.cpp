// Static Members
// Lecture 8 Part 2

// static variables are defined outside the class
// we can not use this pointer in static functions

#include <iostream>

class Account
{
private:
    static float rate_of_interest;
    
public:
    static void setRateOfInterest(float roi)
    {
        rate_of_interest = roi;                 // we can not use 'this' pointer here
    }
    
    static void getRateOfInterest()
    {
        std::cout<<"rate of interest: "<<rate_of_interest<<"\n";
    }
};

float Account::rate_of_interest = 3.2f;


int main()
{
    Account::getRateOfInterest();
    
    
    Account::setRateOfInterest(2.1);
    Account::getRateOfInterest();
}
