// Iinitializer
// Lecture 22 Part 1

// Initializer list is used to initialize data members of a class
// the list of members to be initiallized is indicated with constructor as a comma separated list followed by a colon
// mainly we use this method to initialize 'const' and referance variables since we can not initialize const member variable in constructor

class A
{
private:
    int a, b;
    const int x;
    int& y;
public:
    A(int &n) : x(39), y(n), a(5), b(2)      // 'a' and 'b' are initialized under constructor
    {
        //this->a = 5; this->b = 2           // other possibility of initilising 'a' and 'b'
    }
};


int main()
{
    int y = 20;
    A a(y);
}
