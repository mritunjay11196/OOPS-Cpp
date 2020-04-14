// Static Members
// Lecture 8 Part 1

#include <iostream>

void fucntion()
{
    static int x;                   // 'x' will get it's memory space without even calling this function
    int y;                          // 'y' will get it's memory only when this function is called
}



class Account
{
public:
    int balance;                            // instance member variable
    static float rate_of_interest;          // instance member variable, aka class variable
    
public:
    void setBalance(int balance)
    {
        this->balance = balance;
    }
    
    void showBalance()
    {
        std::cout<<balance<<"\n";
    }
};

float Account::rate_of_interest = 3.5f;             // static variable doesn't depend on class object

int main()
{
    std::cout<<Account::rate_of_interest<<"\n";     // build without creating object
    //`std::cout<<Account::balance<<"\n";              // can not build because it isn't static hence we have to first create an object first
    
    Account a1;
    a1.setBalance(100);
    a1.showBalance();
    
    std::cout<<Account::rate_of_interest<<"\n";
}



