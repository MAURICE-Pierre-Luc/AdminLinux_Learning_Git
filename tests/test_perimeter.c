// tests/test_perimeter.c
#include <assert.h>
#include <math.h>

#include "../perimeter.h"

#define PRECISION 0.00001

void test_perimeter_rectangle() {
    assert(fabs(perimeter_rect(2.0, 8.0) -20.0) < PRECISION);
}

int main() {
    test_perimeter_rectangle();
}

