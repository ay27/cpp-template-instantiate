//
// Created by ay27 on 17/3/17.
//

#ifndef LIB_TEST_FUNC_H
#define LIB_TEST_FUNC_H

namespace LibTest {

    void func();

    template <typename value_type>
    value_type add(value_type a, value_type b);

    template <typename value_type>
    value_type sub(value_type a, value_type b) {
        return a - b;
    }
}

#endif //LIB_TEST_FUNC_H
