/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 6 - Task 1                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 23.04.2022                                                         *
 ****************************************************************************/
#include <stdio.h>

int main(){
    double d = 1.23456;
    int i = 1291;
    char ch = 'c';

    double* p_d = &d;
    int* p_i = &i;
    char* p_ch = &ch;

    printf("value of d: %f\n", d);
    printf("value of i: %d\n", i);
    printf("value of ch: %c\n", ch);
    printf("value of p_d: %p\n", p_d);
    printf("value of p_i: %p\n", p_i);
    printf("value of p_ch: %p\n", p_ch);

    printf("-------------------------------");
    printf("The address of ch is %p \n", &ch);
    printf("The address of i is %p \n", &i);
    printf("The address of d is %p \n", &d);
    printf("The address of p_ch is %p \n", &p_ch);
    printf("The address of p_i is %p \n", &p_i);
    printf("The address of p_d is %p \n", &p_d);

    printf("The size of ch is %lu bytes \n", sizeof(ch));
    printf("The size of i is %lu bytes \n", sizeof(i));
    printf("The size of d is %lu bytes \n", sizeof(d));
    printf("The size of p_ch is %lu bytes \n", sizeof(p_ch));
    printf("The size of p_i is %lu bytes \n", sizeof(p_i));
    printf("The size of p_d is %lu bytes \n", sizeof(p_d));
    return 0;
}