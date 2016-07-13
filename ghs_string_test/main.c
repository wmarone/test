#include <stdio.h>
#define OTHER_LOC(x) \
    {\
        static const __attribute__((section(".msgdata"))) char __c[] = (x);\
        static const __attribute__((section(".msgdata"))) char __d[] = __FILE__;\
        printf(__c);\
        printf(__d);\
    }

int main(int argc, char **argv)
{
    OTHER_LOC("test string");
}
