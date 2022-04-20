/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 3 - Task 1                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 20.04.2022                                                         *
 ****************************************************************************/

#include <stdio.h>
const int maxLength = 1000;

/**
 * In general, whatDoesItDo returns the sum of the elements of the array by step k
 * @param array
 * @param n is the size of the array
 * @param k is the size of the step of elements looked at
 * @return
 */

int whatDoesItDo(int array[], int n, int k){
    int result = -1000;
    for (int i=0; i < n; i++){
        int current = 0;
        for (int j=i; j < n; j+=k){
            current += array[j];
        }
        if (current > result){
            result = current;
        }
    }
    return result;
}

int getInput(){
    printf("Enter integer for step size: ");
    int step;
    scanf(" %d", &step);
    return step;
}

int main(){
    printf("Values of array separated by spaces (non-number to stop): ");
    int arr[maxLength];
    int pos = 0;
    while (scanf("%d", &arr[pos]) == 1) {
        pos++;
    }
    fflush(stdin);
    int step = getInput();
    printf("%d", whatDoesItDo(arr, pos, step));
    return 0;
}