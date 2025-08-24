#include <stdio.h>
#include <string.h>
#include "uart/uart.h"
#include "timer/timer.h"

// Dummy structure representing data to be stored
typedef struct {
    int id;
    char data[256];
} StorageItem;

// Dummy storage array
#define STORAGE_SIZE 10
static StorageItem storage[STORAGE_SIZE];

// Initialize storage (middleware requirement)
void storage_init() {
    for (int i = 0; i < STORAGE_SIZE; ++i) {
        storage[i].id = -1;
        strcpy(storage[i].data, "");
    }
}

// Store an item (middleware requirement)
int storage_save(int id, const char *data) {
    for (int i = 0; i < STORAGE_SIZE; ++i) {
        if (storage[i].id == -1) {
            storage[i].id = id;
            strncpy(storage[i].data, data, sizeof(storage[i].data) - 1);
            storage[i].data[sizeof(storage[i].data) - 1] = '\0';
            return 0; // Success
        }
    }
    return -1; // Storage full
}

// Retrieve an item (middleware requirement)
const char* storage_get(int id) {
    for (int i = 0; i < STORAGE_SIZE; ++i) {
        if (storage[i].id == id) {
            return storage[i].data;
        }
    }
    return NULL; // Not found
}

// Dummy middleware usage example
void middleware_example() {
    storage_init();
    storage_save(1, "Hello, Middleware!");
    const char *retrieved = storage_get(1);
    if (retrieved) {
        printf("Retrieved: %s\n", retrieved);
    } else {
        printf("Item not found.\n");
    }
}