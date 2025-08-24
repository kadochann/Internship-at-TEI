#ifndef STORAGE_H
#define STORAGE_H

void storage_init();
void storage_save(int id, const char *data);
const char* storage_get(int id);
void middleware_example();



#endif // STORAGE_H