// Pair in STL
// Lecture 35 Part 1

// it is not a container
// pair <data_type_1, data_type_2> pair 1
// it is like dictionaries from python

#include <iostream>

class Student
{
private:
    std::string name;
    int age;
    int roll_number;
public:
    void setStudent(std::string s, int a, int r)
    {
        name = s;
        age = a;
        roll_number = r;
    }
    void showStudent()
    {
        std::cout<<name<<" "<<age<<" "<<roll_number<<std::endl;
    }

    
};
int main()
{
    std::pair<std::string, int> p1;
    std::pair<std::string, float> p2;
    std::pair<std::string, std::string> p3;
    std::pair<std::string, Student> p4;
    
    // INSERTING VALUES
    p1 = std::make_pair("Mritunjay", 69);
    p2 = std::make_pair("Drilling c++", 420.69);
    p3 = std::make_pair("India", "New Delhi");
    Student s1;
    s1.setStudent("MJ", 22, 200);
    p4 = std::make_pair("STUDENT", s1);
    
    // ACCESS, using first and second
    std::cout << p4.first << std::endl;
    Student s2 = p4.second;
    s2.showStudent();
    
    
    
    
    
    
    
    
    
    
        
}
