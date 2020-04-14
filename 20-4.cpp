// Class Template
// Lecture 20 Part 4

// class template is also known as generic class

// SYNTAX
// template <class 'placeholder name (new data type name)'>
// class class_name {....}


#include <iostream>

class ArrayList
{
private:
    struct ControlBlock
    {
        int capacity;
        int* arr_ptr;
    };
    
    ControlBlock* s;
    
public:
    ArrayList(int capacity)
    {
        s = new ControlBlock;
        s->capacity = capacity;
        s->arr_ptr = new int[s->capacity];
    }
    
    void addElement(int index, int data)
    {
        if(index >= 0 && index <= s->capacity-1)
            s->arr_ptr[index] = data;
        std::cout<<"array index is not valid\n";
    }
    
    void viewElement(int index, int data)
    {
        if(index >= 0 && index <= s->capacity-1)
            data = s->arr_ptr[index];
        std::cout<<"array index is not valid\n";
    }
    
    void viewList()
    {
        int i;
        for(i = 0; i < s->capacity; i++)
            std::cout<<" "<<s->arr_ptr[i];
    }
};

int main()
{
    int data;
    ArrayList list1(4);
    list1.addElement(0, 32);
    list1.viewElement(0, data);
    std::cout<<"value in the array is: "<<data<<"\n";
}
