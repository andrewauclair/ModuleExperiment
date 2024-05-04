#include <iostream>

import poco.foundation;

int main()
{
	std::cout << "Hello World\n";
	
	Poco::Timestamp time;
	
	std::cout << "time: " << time.raw();
}
