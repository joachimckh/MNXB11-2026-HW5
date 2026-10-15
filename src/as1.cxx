#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int *c) { 
    int tempa= *a;
    int tempb= *b;
    int tempc= *c;
    
    *a = tempb;
    *b= tempc;
    *c= tempa;
    ;}


UniqueData::UniqueData(int value)
    : data_ (std::make_unique<int>(value))
    {}
int UniqueData::get()const{
    return *data_;
}
void UniqueData::set(int value){
    *data_ = value;
}



}; // namespace homework
