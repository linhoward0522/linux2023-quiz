uint64_t next_pow2(uint64_t x)
{
    if (x == 0)
        return 1;
    int clz = __builtin_clzl (x);
    return (1 << (64 - clz));
}

