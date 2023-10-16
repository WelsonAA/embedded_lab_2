//
// Created by George Welson on 16-Oct-23.
//
#include "task_3.h"


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void do_task_3(){
    int num1 = 5;
    int num2 = 10;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

}