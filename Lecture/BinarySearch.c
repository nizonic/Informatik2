// C program to implement recursive Binary Search
#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
/* Pseudocode:
Step 1: Start
Step 2: Input Sorted array in "a[]" and element to be searched in "x" and size of array in "size"
Step 3: Initialize low=0, high=size-1
Step 4: Repeat until low>=high
        Step 4.1: mid=(low+high)/2
        Step 4.2: If a[mid] is equal to x,
                    then, print index value of mid and Goto step 6
                Else
                    If a[mid]<x
                        low=mid+1
                    else
                        high=mid-1
Step 5: Print x not found in the list
Stop 6: Stop */