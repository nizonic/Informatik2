/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 7 - Task 3                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 26.04.2022                                                         *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
const int maxlength = 1000;

void get_span(int data[], int num_data, int* spans){
    if (!data){
        printf("Array is empty.\n");
    }
    spans[0] = 1;
    int span = 1;
    for (int i = 1; i < num_data; i++){
        if (data[i - 1] <= data[i]){
            span++;
            spans[i] = span;
        }
        else {
            span = 1;
            spans[i] = span;
        }
    }
}

void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int array1[] = {6,3,4,5,2};
    int array2[] = {5,6,4,8,1};
    int size1 = sizeof(array1)/sizeof(array1[0]);
    printArray(array1, size1);
    printf("\n");
    int spanArray1[size1];
    get_span(array1, size1, spanArray1);
    printArray(spanArray1, size1);
    printf("\n\n");
    int size2 = sizeof(array2)/sizeof(array2[0]);
    printArray(array2, size2);
    printf("\n");
    int spanArray2[size2];
    get_span(array2, size2, spanArray2);
    printArray(spanArray2, size2);
    return 0;
}