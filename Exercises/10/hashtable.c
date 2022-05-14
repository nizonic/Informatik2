/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 10 - Task 2                                                     *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 14.05.2022                                                         *
 ****************************************************************************/
#include <stdlib.h>
#include <stdio.h>

#define m 7

#define OCC 0
#define EMP -1
#define DEL -2

struct HTElement{
    int value;
    int status;
};

void init(struct HTElement A[]){
    for (int i=0; i<m; i++){
        A[i].value = 0;
        A[i].status = EMP;
    }
}

int hash(int key, int probe){
    int h1 = (key%m)+1;
    int h2 = (m-1) - (key % (m-1));
    int h = (h1 + probe * h2) % m;
    return h;
}

void insert(struct HTElement A[], int key){
    int counter = 0; //probing nr, has to be smaller than m
    int hkey;

    do{
        hkey = hash(key, counter); //getting the hashed key
    } while(A[hkey].status == OCC && counter++ < m);
    if (counter >= m){
        printf("Hashtable is full\n");
        return;
    }
    A[hkey].value = key;
    A[hkey].status = OCC;
}

int delete(struct HTElement A[], int key){
    int counter = 0;
    int hkey;
    do{
        hkey = hash(key, counter);
        if (A[hkey].value == key){
            A[hkey].status = DEL;
            return hkey;
        }
    } while (A[hkey].value != key && A[hkey].status == OCC && counter++ < m);
    return 0;
}

int search(struct HTElement A[], int key){
    int counter = 0;
    int hkey;
    do{
        hkey = hash(key, counter);
        if (A[hkey].value == key){
            return hkey;
        }
    } while (A[hkey].value != key && A[hkey].status == OCC && counter++ < m);
    return -1;
}

void printHashTable(struct HTElement A[]){

}