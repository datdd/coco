#include <stdio.h>
#include <string.h>
#include "string_utility.h"

#if EXTRA_PROFILE
#include "time_utility.h"
#endif

#define HELLO_WORLD_MSG "Hello World 2023!"

int main(int argc, char *argv[]) {
#if EXTRA_PROFILE
    char buffer[100];
    get_current_time(buffer, sizeof(buffer));
    printf("%s - %s\n", buffer, HELLO_WORLD_MSG);
#else
    printf("%s\n", HELLO_WORLD_MSG);
#endif

    check_string(HELLO_WORLD_MSG, strlen(HELLO_WORLD_MSG));

    return 0;
}