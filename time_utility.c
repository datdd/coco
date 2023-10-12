#include <time.h>
#include <string.h>
#include "time_utility.h"

void get_current_time(char *str_time, int str_len) {
    time_t current_time;
    struct tm *time_info;

    if (NULL == str_time) return;

    memset(str_time, 0, str_len);
    time(&current_time);
    time_info = localtime(&current_time);

    strftime(str_time, str_len, "%Y-%m-%d %H:%M:%S", time_info);
}
