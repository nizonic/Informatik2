/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 4 - Task 7                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 20.04.2022                                                         *
 ****************************************************************************/

#include <stdio.h>
const int maxLength = 1000;

/**
 * alternative Merge sort function, requires the following inputs:
 * @param array an array of integers
 * @param l index lft
 * @param r index rgt
 * @param m middle of the array
 * @return
 */

int merge(int arrayA[], int l, int r, int m){
    int arrayB[maxLength];
    for (int i=l; i<=m; i++){
        arrayB[i] = arrayA[i];
    }
    for (int i=m+1; i<=r; i++){
        arrayB[r+m-i+1] = arrayA[i];
    }
    int i = l;
    int j = r;
    for (int k=l; k<=r; k++){
        if (arrayB[i] < arrayB[j]){
            arrayA[k] = arrayB[i];
            i++;
        }
        else {
            arrayA[k] = arrayB[j];
            j--;
        }
    }
    return 0;
}

/**
 *
 * @param array
 * @param l
 * @param r
 * @return
 */

int mergeSort(int array[], int l, int r){
    int m;
    if (l < r){
        m = (l + r) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, r, m);
    }
    return 0;
}

int main(){
    printf("Values of array separated by spaces (non-number to stop): ");
    int arr[maxLength];
    int size = 0;
    while (scanf("%d", &arr[size]) == 1) {
        size++;
    }
    mergeSort(arr, 0, size);
    for (int j = 0; j < size; ++j) {
        printf("%d ", arr[j]);
    }
    return 0;
}