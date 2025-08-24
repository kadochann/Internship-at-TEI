#include <stdio.h>
#include "gpio.h"
#include "scheduler_interface.h"

void gpio_init(void) {
    printf("GPIO initialized.\n");
}

void gpio_set(int pin, int value) {
    printf("GPIO pin %d set to %d\n", pin, value);
}
