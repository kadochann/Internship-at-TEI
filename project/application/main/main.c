#include <stdio.h>
#include "commands/commands.h"
#include "scheduler/scheduler.h"
#include "auth_midware/auth_midware.h"
#include "state_machine/state_machine.h"
#include "uart/uart.h"

int main(void) {
    printf("System Starting...\n");

    // Init scheduler
    scheduler_init();

    // Init state machine
    state_machine_init();

    // Main loop
    while (1) {
        command_process();
        scheduler_run();
        state_machine_update();
    }

    return 0;
}
