// Inheritance
// Lecture 13 Part 2

#include <iostream>

class Car
{
private:
    int gear;
public:
    Car() {this->gear = 0;}
    void incrementGear()
    {
        if(this->gear < 5)
            gear++;
    }
    
    void getGear()
    {
        std::cout<<this->gear<<std::endl;
    }
};

class Sports_Car: public Car
{
    
};


int main()
{
    Sports_Car sc1;
    sc1.getGear();
    sc1.incrementGear();
    sc1.getGear();
    
    return 0;
}
