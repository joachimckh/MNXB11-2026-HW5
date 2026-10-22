#include "as1.hpp"

namespace homework {
//1.1
void swap_ptr(int* a, int* b, int *c) { 
    
   int d = *a;
   *a =*b;
   *b =*c;
   *c = d;
    
    return;}


//1.2
UniqueData::UniqueData(int value) : data_(std::make_unique<int>(value)){}
int UniqueData::get() const {
    return *data_;
}
void UniqueData::set(int value){
    *data_ = value;
    return;
}


}; // namespace homework
