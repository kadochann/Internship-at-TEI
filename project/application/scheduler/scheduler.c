#include <stdio.h>
#include "scheduler.h"
#include "gpio/gpio.h"

void scheduler_init(void) {
    printf("Scheduler initialized.\n");
}

void scheduler_run(void) {
    // Run periodic tasks
    printf("Scheduler running...\n");
}

