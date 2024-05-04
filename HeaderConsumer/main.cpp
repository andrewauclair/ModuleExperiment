#include "library.h"
#include "second.h"
#include <iostream>

int main()
{
	auto test = Library::Test(Library::Test::static_value);
	auto secondTest = Second::SecondTest(Second::SecondTest::static_value);

	std::cout << test.internal_value() << ' ' << secondTest.internal_value();

	test.change_internal_value();
	secondTest.change_internal_value();

	std::cout << '\n';
	std::cout << test.internal_value() << ' ' << secondTest.internal_value();
}
