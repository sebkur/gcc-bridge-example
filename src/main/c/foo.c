typedef unsigned long long u64;
static u64 R(u64 x,int c) { return (x >> c) | (x << (64 - c)); }
