module;

#undef Library_EXPORTS

#define EXPORT_ export

export module Library;

extern "C++" {
#include "library.h"
}
