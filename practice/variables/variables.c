#include <stdio.h>
#include <math.h>

int main() {
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;

    sum = roundf(a + b + c);

    printf("The sum of a, b, and c is %f.", sum);
    return 0;
}