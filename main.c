#include <stdio.h>
#include "file1.h"

#if EXTRA_PROFILE
#include "time_utility.h"
#endif

extern int calculate(int a, int b);

int main(int argc, char *argv[]) {
    int sum;
    char buffer1[10];
#if EXTRA_PROFILE
    char buffer2[100];
#endif
    
    sum = calculate(1, 2);
    sprintf(buffer1, "%d", sum);
#if EXTRA_PROFILE
    get_current_time(buffer2, sizeof(buffer2));
    show(buffer1, buffer2);
#else
    show(buffer1);
#endif

    return 0;
}