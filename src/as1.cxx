#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int *c) { 
    std::swap(*a,*b);
    std::swap(*b,*c);
    return;
}

UniqueData::UniqueData(int value) {
    data_ = std::make_unique<int>(value);
}

int UniqueData::get() const{
    int value = *data_;
    return value;
}

void UniqueData::set(int value){
    *data_ = value;
}


}; // namespace homework
