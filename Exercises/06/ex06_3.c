/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 6 - Task 3                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 23.04.2022                                                         *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


struct Node* insertList(struct Node* head, int data){
    if (head == NULL) {
        head = malloc(sizeof(struct Node));
        head->data = data;
        head->next = NULL;
        return head;
    }
    else{
        struct Node *newNode = malloc(sizeof(struct Node));
        struct Node *current = head;
        newNode->data = data;
        newNode->next = NULL;
        while (current->next != NULL){
            current->next = current;
        }
        current->next = newNode;
        return head;
    }
}

void displayList(struct Node *head){
    struct Node *current = head;
    while (current != NULL){
        if (current->next != NULL){
            printf("%d -> ", current->data);
        }
        else{
            printf("%d\n", current->data);
        }
        current = current->next;
    }
}

int anagramValidation(struct Node *head, struct Node *kopf){
    struct Node *current1 = head;
    struct Node *current2 = kopf;
    while (current1 != NULL && current2 != NULL){
        if (current1->data != current2->data){
            break;
        }
        current1 = current1->next;
        current2 = current2->next;
    }
    if (current1->data != current2->data){
        return 0;
    }
    return 1;
}

int main(){
    return 0;
}