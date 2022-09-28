#include <stdio.h>
int N, M;

void BiQuadFinder(int graph[][]){

}

void createAdjMatrix(int Adj[][N + 1],
                     int arr[][2])
{

    // Initialise all value to this
    // Adjacency list to zero
    for (int i = 0; i < N + 1; i++) {

        for (int j = 0; j < N + 1; j++) {
            Adj[i][j] = 0;
        }
    }

    // Traverse the array of Edges
    for (int i = 0; i < M; i++) {

        // Find X and Y of Edges
        int x = arr[i][0];
        int y = arr[i][1];

        // Update value to 1
        Adj[x][y] = 1;
        Adj[y][x] = 1;
    }
}

int main(){
    int n;
    int array[n][n];
    BiQuadFinder(array);
}