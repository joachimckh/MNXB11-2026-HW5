#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int *c) {
    int a_temp=*a;
    int b_temp=*b;
    int c_temp=*c;
    *a= b_temp;
    *b= c_temp;
    *c= a_temp;}


    UniqueData::UniqueData(int value) : data_(std::make_unique<int>(value)) {}
    int UniqueData::get() const{
        return *data_;
        }
    void UniqueData::set(int value) {
        *data_=value;
        }  

}; // namespace homework
