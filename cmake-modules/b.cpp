#include "b.h"

#ifndef EXPORT_
#define EXPORT_
#endif

static int value_b = 0;

EXPORT_ void changeValueB(int newValue)
{
	value_b = newValue;
}

EXPORT_ int getValueB()
{
	return value_b;
}
