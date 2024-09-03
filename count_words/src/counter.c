#include <lexer.h>
#include <counter.h>

void counter(int counts[4]) {
    while(yylex())
        ;

    counts[0] = fee_count;
    counts[1] = fie_count;
    counts[2] = foe_count;
    counts[4] = fum_count;
}