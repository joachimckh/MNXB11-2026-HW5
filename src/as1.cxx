#include "as1.hpp"

namespace homework {

 //1.1 - Swap three raw pointers
void swap_ptr(int* a, int* b, int *c) {
     int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

//1.2 - Unique data class
UniqueData::UniqueData(int value) {
    data_ = std::make_unique<int>(value);
}

int UniqueData::get() const {
    return *data_;
}

void UniqueData::set(int value) {
    *data_ = value;
}



}; // namespace homework
