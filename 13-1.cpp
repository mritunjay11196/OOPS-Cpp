// Inheritance
// Lecture 13 Part 1

// class is used to describe properties and behaviour of an object
// ingeritance is a process of inheriting properties and behaviours of existing class into a new class

// old class ----> parent class / base class / existing class
// new class ---------> child class / drived class


// SYNTAX

//class Base_Class
//{     };
//
//class Derived_Class : <Access specifier(private, protected, public)> Base_Class
//{     };


class A
{
private:
    int a;
public:
    int b;
protected:
    int c;
};

class B1 : private A {};
class B2 : protected A {};
class B3 : public A {};


int main()
{
//    B1 b1;              // private
//    b1.a;       // 'a' is a private member of 'A'
//    b1.b;       // 'b' is a private member of 'A'
//    b1.c;       // 'c' is a private member of 'A'

//    B2 b2;              // protected
//    b2.a;       // 'a' is a private member of 'A'
//    b2.b;       // 'b' is a protected member of 'A'
//    b2.c;       // 'c' is a protected member of 'A'
   
//    B3 b3;               // public
//    b3.a;       // 'a' is a private member of 'A'
//    b3.b;       // WE CAN USE THIS
//    b3.c;       // 'c' is a protected member of 'A'
    
}




