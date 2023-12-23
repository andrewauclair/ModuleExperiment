#include "library.h"
#include <iostream>

int main()
{
	Library::Test t{ Library::Test::static_value };

	std::cout << t.getValue();
}
