#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
    uint32_t *buffer = malloc(1024);
    uint32_t *mal = (uint32_t*)((uint8_t)buffer + 0x1);

    printf("addr: %p\n maddr: %p\n", buffer, mal);

    return 0;
}
