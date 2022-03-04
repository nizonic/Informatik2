/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 1 - Task 2                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 25.02.2022                                                         *
 ****************************************************************************/

#include <stdio.h>


// hard-coded maximum length for input strings
const int MAX_LENGTH = 1000;

void BS(char A[]) {

	return;
}



int count_vowels(char A[]){
    int i;
    int count = 0;
    for (i=0; A[i] != '\0'; i++){
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'o' || A[i] == 'i' ||A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'O' || A[i] == 'I' ||A[i] == 'U'){count++;}
    }
    return 0;
}

int main() {
	char input_string[MAX_LENGTH + 1];
	printf("Enter a string: ");
	scanf("%[^\n]s", input_string);


	return 0;
}
