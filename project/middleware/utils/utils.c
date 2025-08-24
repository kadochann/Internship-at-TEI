#include "utils.h"
#include <stdio.h>
#include <string.h>
#include "timer/timer.h"

static char utils_buffer[256];

// Logger function with internal buffer
void utils_log(const char *message) {
    snprintf(utils_buffer, sizeof(utils_buffer), "[UTILS LOG]: %s\n", message);
    printf("%s", utils_buffer);
}

// String copy utility with fixed buffer
char* utils_strcpy(const char *src) {
    strncpy(utils_buffer, src, sizeof(utils_buffer) - 1);
    utils_buffer[sizeof(utils_buffer) - 1] = '\0';
    return utils_buffer;
}

// Error handler with no parameters
int utils_handle_error(void) {
    printf("[UTILS ERROR]: An error occurred\n");
    return -1;
}

// Initialization function (no change needed)
void utils_init(void) {
    printf("[UTILS INIT]: Initialization complete.\n");
}