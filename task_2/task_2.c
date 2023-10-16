//
// Created by George Welson on 16-Oct-23.
//
#include "task_2.h"
void multiplyArray(int arr[], int size, int multiplier) {
    for (int i = 0; i < size; i++) {
        arr[i] *= multiplier;
    }
}
void do_task_2(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int multiplier = 3;

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    multiplyArray(arr, size, multiplier);

    printf("\nArray after multiplication: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

}