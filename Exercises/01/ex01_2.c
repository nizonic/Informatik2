/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 1 - Task 3                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 25.02.2022                                                         *
 ****************************************************************************/

#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/* void selectionSort(int A[], int n) {
    int i;
    int k;
    int j;
    int temp;
    for (i=0; i<= n-1; i++){
        k = i;
        for (j = i+1; j<n; j++){
            if (A[j] < A[k]){k=j;}
        }
        temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
}
*/

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

void evenOddSelectionSort(int A[], int n){
    int i;
    int E[100];
    int O[100];
    int e_count = 0;
    int o_count = 0;
    selectionSort(A, n);
    for (i=0; i<n; ++i){
        if (A[i] % 2 == 0){E[e_count] = A[i]; e_count++;}
        else {O[o_count] = A[i]; o_count++;}
    }
	for (i=0; i<e_count; ++i){
        printf("%d ", E[i]);
    }
    printf("\n");

    for (i=0; i<o_count;++i){
        printf("%d ", O[i]);
    }
}

int main(int argc, const char * argv[]) {
	int A[100];
	int n = 0;

	printf("Values of A separated by spaces (non-number to stop):");
	
	while (scanf("%d", &A[n]) == 1) {
		n++;
	}

	scanf("%*s");
	printf("Result: \n");
    evenOddSelectionSort(A, n);
	//printf("Result: ");
	//evenOddSelectionSort(A, n);
}
