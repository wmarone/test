#include <stdio.h>

struct _p {
    int c;
    int d;
};

struct _t {
    int a;
    int b;
    struct _p p;
};

struct _p testp = {
                    .c = 10,
                    .d = 20,
                  };


struct _t test = {
                    .a = 5,
                    .b = 33,
                    .p = testp,
                 };

int main(int argc, char **argv)
{
    return 0;
}
