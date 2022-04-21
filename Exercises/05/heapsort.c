/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 5 - Task 1                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 21.04.2022                                                         *
 ****************************************************************************/

#include <stdio.h>
const int maxLength = 1000;

int parent(int i){
    return i/2;
}

int leftChild(int i){
    return 2*i+1;
}

int rightChild(int i){
    return 2*i+2;
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 *
 * @param array
 * @param i index
 * @param s size of the heap (=number of elements in heap)
 */

void heapify(int array[], int i, int s){
    int largest = i;
    int left = leftChild(i);
    int right = rightChild(i);

    if (left < s && array[left] > array[largest]){
        largest = left;
    }
    if (right < s && array[right] > array[largest]){
        largest = right;
    }
    if (i != largest){
        swap(&array[i], &array[largest]);
        heapify(array, largest, s);
    }
}

void buildHeap(int array[], int n){
    for (int i = n/2 - 1; i >= 0; i--){
        heapify(array, i, n);
        printArray(array, n);
    }
}

void heapSort(int array[], int n){
    buildHeap(array, n);
    for (int i = n - 1; i>= 0; i--){
        swap(&array[0], &array[i]);
        heapify(array, 0, i);
        printArray(array, n);
    }
}

int main(){
    printf("Values of array separated by spaces (non-number to stop): ");
    int array[maxLength];
    int size = 0;
    while (scanf("%d", &array[size]) == 1) {
        size++;
    }
    heapSort(array, size);
    printArray(array, size);
    return 0;
}