#include <stdio.h>
#include <stdint.h>

void copy(uint32_t *buf)
{
    volatile uint32_t bounce;

    printf("buf:    %p\n", buf);
    printf("buf(m): %p\n", (((uint32_t)buf) & ~0x3));

    bounce = *((uint32_t*)(((uint32_t)buf) & ~0x3));

    printf("%x\n", bounce);
}

void alt_copy(uint32_t *buf)
{
    volatile uint32_t bounce;

    printf("buf:    %p\n", buf);
    printf("buf(m): %p\n", (((uint32_t)buf) & ~0x3));

    buf = (uint32_t*)(((uint32_t)buf) & ~0x3);

    printf("%p\n", buf++);
    printf("%p\n", buf++);
    printf("%p\n", buf++);

}

int main(int argc, char **argv)
{
    uint8_t u8;
    uint16_t u16;
    uint32_t u32;

    u8  = 0x80;
    u16 = 0x8000;
    u32 = 0xdeadbeef;

    copy((uint32_t*)&u8);
    copy((uint32_t*)&u16);
    copy((uint32_t*)&u32);

    alt_copy((uint32_t*)&u8);
    alt_copy((uint32_t*)&u16);
    alt_copy((uint32_t*)&u32);

    return 0;
}
