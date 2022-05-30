#include "sys_memcpy.h"
void sys_memcpy(void * dst, const void *src, size_t size)
{
    memcpy(dst, src, size);
}


