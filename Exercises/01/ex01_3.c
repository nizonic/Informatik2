/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 1 - Task 4                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 25.02.2022                                                         *
 ****************************************************************************/

#include <stdio.h>
const int MAX_LENGTH = 1000;

int main() {
	printf("Values of A separated by spaces (non-number to stop): ");
	int timestamps[MAX_LENGTH];
	int pos = 0;
	while (scanf("%d", &timestamps[pos]) == 1) {
		pos++;
	}


	return 0;
}