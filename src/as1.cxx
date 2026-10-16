#include "as1.hpp"

namespace homework {

// as1.1
void swap_ptr(int* a, int* b, int *c) 
{
    int og_a = *a;  // "*" refers to the value stored
    *a = *b; 
    *b = *c; 
    *c = og_a; 
};

// as1.2
UniqueData::UniqueData(int value)
    : data_(std::make_unique<int>(value)){}

    int UniqueData::get() const
    {
        return *data_;
    }

    void UniqueData::set(int value)
    {
        *data_ = value; 
    }

}; // namespace homework
