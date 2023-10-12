#include <stdio.h>
#include "file1.h"

#if EXTRA_PROFILE
void show(char *msg, char *extra) {
    printf("%s - %s", extra, msg);
}
#else
void show(char *msg) {
    printf("%s", msg);
}
#endif