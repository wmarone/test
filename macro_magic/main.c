#include <stdio.h>

#define INFO1(a) \
{                \
    printf(a);   \
}

#define INFO2(a,b) \
{                  \
    printf(a);     \
    printf(b);     \
}

#define GET_INFO_MACRO(_0,_1,NAME,...) NAME

#define INFO(...) GET_INFO_MACRO(__VA_ARGS__, INFO2, INFO1) (__VA_ARGS__)

int main(int argc, char **argv)
{
    INFO("info1\n");
    INFO("info2a\n", "info2b\n");
}
