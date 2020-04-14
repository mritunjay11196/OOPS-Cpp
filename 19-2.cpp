// Abstract Class, any class which has even one pure virtual function
// Lecture 19 Part 2

// why do we wanna make an Abstract class????
// for generalisation

class Person
{};

class Student : public Person
{};

class faculty : public Person
{};

// here, we have two classes, student and faculty. GENERALISATION is a good thing to do, and so here we will be needing a super class which can act as a parent class for both student and faculty classes. Hence we will make an Abstract class, Person, which can not have any objects but at the same time will act as a parent class for Student and Faculty classes. :)
