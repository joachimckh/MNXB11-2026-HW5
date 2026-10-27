#include "as1.hpp"
#include <iostream>


namespace homework {

void swap_ptr(int* a, int* b, int *c) 
{ 
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;  
    return;
}

// Constructor definition but I hate this syntax so much:
homework::UniqueData::UniqueData(int value) : data_(std::make_unique<int>(value))
{

}

// Implementing the getter method:
int homework::UniqueData::get() const
{
    return *data_;
}

//Implementing the setter method:
void homework::UniqueData::set(int value)
{
    *data_ = value;
} 

}; // namespace homework
