#include <stdio.h>

typedef enum {
    STATE_IDLE,
    STATE_ACTIVE,
    STATE_ERROR
} State;

static State current_state;

void state_machine_init(void) {
    current_state = STATE_IDLE;
    printf("State machine initialized: IDLE\n");
}

void state_machine_update(void) {
    switch (current_state) {
        case STATE_IDLE:
            printf("State: IDLE\n");
            current_state = STATE_ACTIVE;
            break;
        case STATE_ACTIVE:
            printf("State: ACTIVE\n");
            current_state = STATE_ERROR;
            break;
        case STATE_ERROR:
            printf("State: ERROR\n");
            current_state = STATE_IDLE;
            break;
    }
}
