/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 5 - Task 2                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 21.04.2022                                                         *
 ****************************************************************************/

#include <stdio.h>
const int maxLength = 1000;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int lomutoPartition(int array[], int left, int right){
    int pivot = array[right];
    int smallPart = left -1;
    for (int j=left; j < right; j++){
        if (array[j] <= pivot){
            smallPart++;
            swap(&array[smallPart], &array[j]);
        }
    }
    swap(&array[smallPart + 1], &array[right]);
    return smallPart + 1;
}

void quickSortLomuto(int array[], int left, int right){
    if (left < right){
        int middle = lomutoPartition(array, left, right);
        quickSortLomuto(array, left, middle -1);
        quickSortLomuto(array, middle + 1, right);
    }
}

int hoarePartition(int array[], int left, int right){
    int reference = array[right];
    int smallPart = left - 1;
    int bigPart = right + 1;
    while (array[bigPart] > reference){
        bigPart--;
    }
    while (array[smallPart] < reference){
        smallPart++;
        if (smallPart < bigPart) {
            swap(&array[smallPart], &array[bigPart]);
        }
        else {
            return smallPart;

        }
    }
    return smallPart;
}

void quickSortHoare(int array[], int left, int right){
    if (left < right){
        int pivot = hoarePartition(array, left, right);
        quickSortHoare(array, left, pivot - 1);
        quickSortHoare(array, pivot, right);
    }
}

int main(){
    int array[] = {11,0,9,19,8,1,5,13,18,7};
    quickSortHoare(array, 0, 10);
    for (int i = 0; i<10; i++){
        printf("%d ", array[i]);
    }
}