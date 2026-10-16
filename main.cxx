/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>
#include <cassert>

using namespace homework;

int main() { 

    // Test 1.1
    int a = 1;
    int b = 2;
    int c = 3;

    homework::swap_ptr(&a, &b, &c);

    assert(a == 2);
    assert(b == 3);
    assert(c == 1);

    // Test 1.2
    homework::UniqueData o{42};

    assert(o.get() == 42);

    o.set(99);

    assert(o.get() == 99);

    return 0;
  
}

