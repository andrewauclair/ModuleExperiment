#include "a.h"

#ifndef EXPORT_
#define EXPORT_
#endif

static int value_a = 0;

EXPORT_ void changeValueA(int newValue)
{
	value_a = newValue;
}

EXPORT_ int getValueA()
{
	return value_a;
}
