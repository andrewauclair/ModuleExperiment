#ifdef ENABLE_MODULE_SUPPORT
import Library;
#else
#include "a.h"
#include "b.h"
#endif

#include <iostream>

int main() {
	#ifdef ENABLE_MODULE_SUPPORT
	std::cout << "Modules\n\n";
	#else
		std::cout << "Headers\n\n";
	#endif
	std::cout << "a: " << getValueA() << ", b: " << getValueB() << '\n';
	
	changeValueA(5);
	changeValueB(50);
	
	std::cout << "a: " << getValueA() << ", b: " << getValueB() << '\n';
}
