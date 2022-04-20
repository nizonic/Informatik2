/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 2 - Task 2                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 13.03.2022                                                         *
 ****************************************************************************/

#include <stdio.h>

// hard-coded maximum length for input strings
const int maxLength = 1000;

int maximum2(int a, int b){
    if (a>=b)return a;
    return b;
}

int secondSmallest(int array[], int length){
    int largestElement;
    int secondLargestElement;
    int left = 0;
    int right = length;
    int middle = length / 2;
    int leftBig;
    int rightBig;
    if (length == 1){return array[0];}
    leftBig = secondSmallest(&array[left, middle], middle);
    rightBig = secondSmallest(&array[middle+1, right], length-middle+1);
    for (int i=1; i<length; i++){
        if (array[i] >= array[i-1]){
            largestElement = array[i];
        }
    }
    return maximum2(leftBig, rightBig);
}

int main() {
	printf("Values of array separated by spaces (non-number to stop): ");
	int arr[maxLength];
	int pos = 0;
	while (scanf("%d", &arr[pos]) == 1) {
		pos++;
	}
	// variable pos will contain number of integers read in from user
    printf("%d\n", secondSmallest(arr, pos));
	// TODO: your implementation

	return 0;
}
