#include <iostream>
#include "test.h"

test :: test()
{
    std::cout << "this is simple constructor" << std::endl;
}

test :: test(int value)
{
    data = value;
    std::cout << "this is a parameterised constructor" << std::endl;
}

int test :: get_data() {
    return (data);
}

void test :: set_data(int value) {
    data = value;
}

