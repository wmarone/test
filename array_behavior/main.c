#include <stdio.h>

struct _t {
    unsigned int nothing;
    unsigned int stuffs[100];
    unsigned int more_nothing;
    unsigned int other_thing;
};

int main(int argc, char **argv)
{
    struct _t thing;

    thing.stuffs[10] = 0xdeadbeef;

    printf("%lu\n", sizeof(thing.other_thing));
    printf("%lu\n", sizeof(thing.stuffs));

    thing.other_thing = (unsigned int)&thing.stuffs[0];

    printf("%x\n", thing.other_thing);
    printf("%x\n", (unsigned int) thing.stuffs);
    printf("%x\n", thing.stuffs[10]);
    printf("%x\n", (unsigned int) ((unsigned int *)thing.other_thing));
    printf("%x\n", ((unsigned int *)thing.other_thing)[10]);


/*
    if (((unsigned int*)thing.other_thing)[10] == thing.stuffs[10])
    {
        printf("hey it worked\n");
    }
*/
    return 0;
}
