/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 1 - Task 4                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 25.02.2022                                                         *
 ****************************************************************************/

#include <stdio.h>
const int MAX_LENGTH = 1000;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

void gap_finder(int array[], int n){
    int i;
    int gap = 0;
    int index;
    for (i=1; i < n; i++){
        if (array[i] - array[i-1] >= gap){
            index = i;
            gap = array[i] - array[i-1];
        }
    }
    printf("The biggest gap is between elements %d and %d , with a gap of %d", index, index + 1, gap);
}

int main() {
	printf("Values of A separated by spaces (non-number to stop): ");
	int timestamps[MAX_LENGTH];
	int pos = 0;
    int i;
	while (scanf("%d", &timestamps[pos]) == 1) {
		pos++;
	}
    selectionSort(timestamps,pos);
    for (i = 0; i< pos; i++){
        printf("%d ", timestamps[i]);
    }
    printf("\n");
    gap_finder(timestamps, pos);
	return 0;
}