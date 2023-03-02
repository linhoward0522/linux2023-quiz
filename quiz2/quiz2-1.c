uint64_t next_pow2(uint64_t x)
{
    x |= x >> 1;
    x |= x >> 1;
    x |= x >> 1;
    x |= x >> 1;
    x |= x >> 1;
    x |= x >> 1;
    x |= x >> 1;
    x |= x >> 8;
    x |= x >> 16;
    x |= x >> 32;
    return x + 1;
}    


uint64_t next_pow2_(uint64_t x)
{
    if (!x)
        return 1;
    if (!(x & (x - 1)))
        return x;
    int clz = __builtin_clzl (x);
    return (1 << (64 - clz));
}
