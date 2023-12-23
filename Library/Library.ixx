module;

#undef Library_EXPORTS

#include "library.h"

export module Library;

export namespace Library
{
	export using Library::Test;
}
