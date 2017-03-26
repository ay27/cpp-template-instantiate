//
// Created by ay27 on 17/3/17.
//

#include "../func.h"
#include <stdio.h>

int main() {
    LibTest::func();
    int a = 10, b = 20;
    LibTest::add(a, b);
    printf("%d\n", LibTest::sub(a, b));
}