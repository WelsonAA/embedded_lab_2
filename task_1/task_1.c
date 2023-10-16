//
// Created by George Welson on 16-Oct-23.
//

#include "task_1.h"

void do_task_1() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptrSum;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;
    ptrSum = &sum;

    addNumbers(ptr1, ptr2, ptrSum);

    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, *ptrSum);

    printf("The sum is %d\n",*ptrSum);
}

void addNumbers(int *ptr1, int *ptr2, int *ptrSum) {
    *ptrSum = *ptr1 + *ptr2;
}
