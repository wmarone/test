#include <stdio.h>

int main(int argc, char **argv)
{
    int test;

    __asm("PUSH {r0-r3}");
    __asm("MOV r0, pc");
    __asm("MOV r1, lr");
    __asm("MOV r2, sp");
    __asm("POP {r0-r3}");
    __asm("PUSH {r8-r12}");
    __asm("POP {r8-r12}");

    test = 0;

    return test;
}
