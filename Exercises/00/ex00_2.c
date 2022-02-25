#include <stdio.h>
#include <limits.h>

int main(){
    int n = 6;
    int A[] = {52, 5, 8, -6, 7, 52};

    int max = INT_MIN;
    int max2 = INT_MIN;


    for(int i=0; i<n; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    for (int i=0; i<n; i++){
        if (A[i] > max2 && A[i] < max){
            max2 = A[i];
        }
    }
    printf("%d\n", max2);
}