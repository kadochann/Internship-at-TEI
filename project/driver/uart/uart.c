#include <stdio.h>
#include "uart.h"
#include "utils/utils.h"   

void uart_init(void) {
    printf("UART initialized.\n");
}

void uart_send(char *msg) {
    printf("UART send: %s\n", msg);
}
