#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

typedef enum {
    GPIO_PIN_RESET = 0,
    GPIO_PIN_SET
} GPIO_PinState;

void gpio_init(void);
void gpio_set(int pin, int value);
GPIO_PinState GPIO_ReadPin(uint8_t pin);

#endif
