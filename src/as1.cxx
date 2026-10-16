#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int *c) { 
    // Temporarily stores *a to prevent redundancies when dereferencing    
    int temporary{*a};

    *a = *b;
    *b = *c;
    *c = temporary;
}

UniqueData::UniqueData(int value)
    : data_{std::make_unique<int>(value)} {
}

int UniqueData::get() const {
    return *data_;
}

void UniqueData::set(int value) {
    *data_ = value;
}

}; // namespace homework
