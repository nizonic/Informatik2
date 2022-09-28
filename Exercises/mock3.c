#include <stdio.h>
#include <stdlib.h>

int M[][2];
int S[][2];

int max(int i, int j){
    if (i>j){
        return i;
    }
    return j;
}

void computeS(int m, int n){
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (M[i][j] == 0 && i==0){
                if (j==0){
                    S[i][j] = 1;
                }
                else{
                S[i][j] = S[i][j-1] + 1;
                }
            }

            else if (M[i][j] == 0 && i!=0){
                if (j==0){
                    S[i][j] = S[i-1][j] + 1;
                }
                S[i][j] = max(S[i][j-1], S[i-1][j]) + 1;
            }
            else {
                if (j == 0) {
                    if (i == 0) {
                        S[i][j] = 0;
                    } else {
                        S[i][j] = S[i - 1][j];
                    }
                } else {
                    if (i == 0) {
                        S[i][j] = S[i][j - 1];
                    }
                    S[i][j] = max(S[i][j - 1], S[i - 1][j]);
                }
            }
        }
    }
}