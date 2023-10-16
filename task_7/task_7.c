//
// Created by George Welson on 16-Oct-23.
//
#include "task_7.h"
int findElementIndex(const int* arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*arr == target) {
            return i;
        }
        arr++;
    }
    return -1;
}

void do_task_7(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int index = findElementIndex(arr, size, target);

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }
}