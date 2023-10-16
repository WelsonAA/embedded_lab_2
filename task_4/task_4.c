//
// Created by George Welson on 16-Oct-23.
//
#include "task_4.h"
int stringLength(const char *str) {
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}

void do_task_4(){
    const char *myString = "Hello, World!";

    int length = stringLength(myString);
    printf("string: %s\n", myString);
    printf("Length of the string: %d\n", length);
}