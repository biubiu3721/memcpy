#include "./memcpy.h"
#include "stdio.h"

#define SIZE 100000
#define LOOP 100
int main()
{
    int a[SIZE];
    int b[SIZE];
    for(int i = 0; i < LOOP; ++i)
    {
        memcpy_me(b, a, SIZE);
    }

}