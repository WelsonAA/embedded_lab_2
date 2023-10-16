//
// Created by George Welson on 16-Oct-23.
//
#include "task_5.h"
void concatenateStrings(const char* str1, const char* str2, char* result) {
    int i, j;

    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; i++, j++) {
        result[i] = str2[j];
    }

    result[i] = '\0';
}
void do_task_5(){
    const char* string1 = "Hello, ";
    const char* string2 = "world!";
    char concatenated[100];

    concatenateStrings(string1, string2, concatenated);
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);
    printf("Concatenated string: %s\n", concatenated);

}