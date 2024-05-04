#include "second.h"

#ifndef BUILDING_MODULE
#include <iostream>
#include <algorithm>
#include <vector>
#else
import std;
#endif

const int Second::SecondTest::static_value = 50;

Second::SecondTest::SecondTest(int value) : value(value)
{
	std::cout << value << '\n';
}

int Second::SecondTest::complex_calculation() const
{
	return 0;
}

static int TU_internal_value = 0;

void Second::SecondTest::change_internal_value() {
	TU_internal_value = 50;
}
int Second::SecondTest::internal_value() {
	return TU_internal_value;
}