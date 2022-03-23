/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 2 - Task 3                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 13.03.2022                                                         *
 ****************************************************************************/

#include <stdio.h>

int fibonacci(int element)
{
    if (element <= 1)
        return element;
    return (fibonacci(element-1) + fibonacci(element-2));
}

int main() {
	int input;
	printf("Enter the number of blinks: ");
	scanf("%d", &input);

	printf("%d", fibonacci(input+1));

	return 0;
}
