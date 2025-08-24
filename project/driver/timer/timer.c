#include <stdio.h>
#include "timer.h"
#include "uart/uart.h"

void timer_init(void) {
    printf("Timer initialized.\n");
}

void timer_tick(void) {
    printf("Timer tick.\n");
}
