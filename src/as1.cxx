#include "as1.hpp"

namespace homework {

    void swap_ptr(int* a, int* b, int *c) {
        int temp = *a;
        *a = *b;
        *b = *c;
        *c = temp; 
}

//contructor, get and set methods
//constructor takes an int value and stores it in data_
//get returns value stored in heap
// set sets value stored in heap
UniqueData::UniqueData(int val) //constructor is stored outside the class
    :data_(std::make_unique<int>(val)){
    }
int UniqueData::get() const {
    return *data_;
}
void UniqueData::set(int val){
    *data_ =val;
}


}; //namespace homework