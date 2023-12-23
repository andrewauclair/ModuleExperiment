#include "library.h"
#include <iostream>

const int Library::Test::static_value = 5;

Library::Test::Test(int value) : value(value)
{
	std::cout << value << '\n';
}

int Library::Test::complex_calculation() const
{
	return value * 100;
}
