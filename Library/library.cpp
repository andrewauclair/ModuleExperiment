#include "library.h"

#ifndef BUILDING_MODULE
#include <iostream>
#include <algorithm>
#include <vector>
#else
import std;
#endif

const int Library::Test::static_value = 5;

Library::Test::Test(int value) : value(value)
{
	std::cout << value << '\n';
}

int Library::Test::complex_calculation() const
{
	return 0;
}

static int TU_internal_value = 0;

void Library::Test::change_internal_value() {
	TU_internal_value = 5;
}
int Library::Test::internal_value() {
	return TU_internal_value;
}
