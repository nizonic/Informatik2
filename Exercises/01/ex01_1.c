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

int is_vowel(char A){
    if (A == 'a' || A == 'e' || A == 'o' || A == 'i' ||A == 'u'
    || A == 'A' || A == 'E' || A == 'O' || A == 'I' ||A == 'U'){return 1;}
    return 0;
}

void BS(char A[]) {
    char BS[MAX_LENGTH];
    int i;
    int add = 0;
    for (i=0; A[i] != '\0'; i++){
        if (is_vowel(A[i]) == 0){BS[i+add] = A[i];}
        else {
            BS[i+add] = A[i];
            BS[i+add+1] = 'b';
            BS[i+add+2] = A[i];
            add += 2;}
    }
    printf("%s\n", BS);
}



int count_vowels(char A[]){
    int i;
    int count = 0;
    for (i=0; A[i] != '\0'; i++){
        if (is_vowel(A[i]) == 1){count++;}
    }
    return count;
}

int main() {
	char input_string[MAX_LENGTH + 1];
	printf("Enter a string: ");
	scanf("%[^\n]s", input_string);
    printf("There are %d vowels in this string\n", count_vowels(input_string));
    BS(input_string);

	return 0;
}
