#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int *c) { 
    
    int a_{*a}; // Get value a points to by dereference 
    int b_{*b};
    int c_{*c};

    *a = b_;
    *b = c_;
    *c = a_;
    
}

UniqueData::UniqueData(int value) : data_{std::make_unique<int>(value)} {}

int UniqueData::get() const {
    return *data_;
}

void UniqueData::set(int value) {
    *data_ = value;
}

}; // namespace homework
