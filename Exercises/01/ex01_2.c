/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 1 - Task 3                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 25.02.2022                                                         *
 ****************************************************************************/

#include <stdio.h>

void selectionSort(int A[], int n) {

	return;
}

void evenOddSelectionSort(int A[], int n){

	
	return;
}

int main(int argc, const char * argv[]) {
	int A[100];
	int n = 0;

	printf("Values of A separated by spaces (non-number to stop):");
	
	while (scanf("%d", &A[n]) == 1) {
		n++;
	}

	scanf("%*s");
	
	//printf("Result: ");
	//evenOddSelectionSort(A, n);
}

// Linux, Mac: gcc task4.c -o task4; ./task4