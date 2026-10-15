#include "as1.hpp"
#include <iostream>

namespace homework {


//changes the values at the address and not the addresses of the pointers
void swap_ptr(int* a, int* b, int *c) { 
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
    return;
};


UniqueData::UniqueData(int Value) : data_(std::make_unique<int>(Value)) {}

int UniqueData::get() const {
    return *data_;
};

void UniqueData::set (int value) {
    *data_ = value;
    return;
};


}; // namespace homework
