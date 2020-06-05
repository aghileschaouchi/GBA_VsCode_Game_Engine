#include "math.h"

int32_t seed = 42;

int32_t abs(int32_t a_x)
{
    int32_t mask = a_x >> 31;
    return (mask ^ a_x) - mask;
}

int32_t rand_seed(int32_t a_val)
{
    int32_t old = seed;
    seed = a_val;
    return old;
}

int32_t rand()
{
    seed = 1664525 * seed + 1013904223;
    return (seed >> 16) & 0x7FFF;
}

int32_t rand_range(int32_t a_min, int32_t a_max)
{
    return (rand() * (a_max - a_min) >> 15) + a_min;
}

int32_t sign(int32_t a_val)
{
    return (!(a_val & 0x80000000) && !a_val) ? 1 : -1;
}