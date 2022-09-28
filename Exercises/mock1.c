#define m 5
#include <stdio.h>

struct elem{
    int key;
    int status;
};
struct elem HT[m];

int hash(int key, int probe){
    int h1 = (key%m);
    int h = (h1 + probe) % m;
    return h;
}

int insert(struct elem A[], int key){
    int counter = 0; //probing nr, has to be smaller than m
    int hkey;

    do{
        hkey = hash(key, counter); //getting the hashed key
    } while(A[hkey].status == 0 && counter++ < m);
    if (counter >= m){
        printf("Hashtable is full\n");
        return -1;
    }
    A[hkey].key = key;
    A[hkey].status = 0;
    return hkey;
}

int HTDelete(int k, struct elem A[]){
    int counter = 0;
    int hkey;
    do{
        hkey = hash(k, counter);
        if (A[hkey].key == k){
            A[hkey].status = -1;
        }
    } while (A[hkey].key != k && A[hkey].status == 0 && counter++ < m);
    if (counter >= m){
        return -1;
    }
    int array[m];
    for (int i=0; i<m; i++){
        if (A[i].key != -1) {
            array[i] = A[i].key;
            A[i].key = -1;
            A[i].status = -1;
        }
    }
    for (int i=0; i<m; i++){
        insert(A, array[i]);
    }
    return hkey;
}





int main(){
    struct elem HT[m];
}