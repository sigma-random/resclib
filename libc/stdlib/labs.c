#include "stdimpl.h"

#ifdef __cplusplus
extern "C" {
#endif

long __labs (long x)
    _IMPLEMENT_ABS(long)

long abs (long x)
    _WEAK_ALIAS_OF("__labs");

#ifdef __cplusplus
}
#endif

