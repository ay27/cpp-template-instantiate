//
// Created by ay27 on 17/3/17.
//

#include "func.h"

#include <stdio.h>

namespace LibTest {
    void func() {
        printf("func\n");
    }

    template<typename value_type>
    value_type add(value_type a, value_type b) {
        return a + b;
    }

    template float add<float>(float a, float b);
    template int add<int>(int a, int b);
}