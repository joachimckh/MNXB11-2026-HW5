#include "as1.hpp"
#include <iostream>

namespace homework {

void swap_ptr(int* a, int* b, int* c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
}

 // namespace homework
