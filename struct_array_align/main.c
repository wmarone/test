#include <stdio.h>

struct q {
    int boffo;
    int bingo[20];
    int burp;
};

int main(int argc, char **argv)
{
    printf("sizeof: %u\n", sizeof(struct q));
    return 0;
}
