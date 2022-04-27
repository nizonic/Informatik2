/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 7 - Task 2                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 26.04.2022                                                         *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
	unsigned int capacity;
	int* items;
  int top;
} Stack;

Stack* create(unsigned int capacity) {
    Stack* new_stack = malloc(sizeof(Stack));
    if (!new_stack) {
        return NULL;
    }
    new_stack->capacity = capacity;
    new_stack->top = -1;
    new_stack->items = malloc(capacity * sizeof(int));
    return new_stack;
}

void delete(struct Stack* stack){
    free(stack->items);
    free(stack);
}

int isEmpty(Stack* stack) {
    if (stack->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(Stack* stack){
    if (stack->top == stack->capacity - 1){
        return 1;
    }
    else return 0;
}

int getCapacity(struct Stack* stack){
    return stack->capacity -1;
}

int numItems(struct Stack* stack){
    return stack->top + 1;
}

int pop(struct Stack* stack){
    if (isEmpty(stack)){
        printf("Error: Could not pop item. Stack is empty\n");
        return -1;
    }
    stack->top--;
    return stack->items[stack->top];
}

int push(struct Stack* stack, int item){
    if (isFull(stack)){
        printf("Error: Could not push item %d onto stack. Stack is full.\n", item);
        return -1;
    }
    stack->top++;
    stack->items[stack->top] = item;
    printf("Item %d pushed to stack.\n", item);
    return 0;
}

int peek(struct Stack* stack){
    if (isEmpty(stack)){
        printf("Stack is empty.\n");
        return -1;
    }
    printf("Item at the top of the stack is %d\n", stack->items[stack->top]);
    return stack->items[stack->top];
}

void print(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    }
    else {
        printf("Printing stack:\n");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d\n", stack->items[i]);
        }
    }
}

int isEqual(struct Stack* stack1, struct Stack* stack2){
    if (numItems(stack1) != numItems(stack2)){
        printf("The stacks are not equal.\n");
        return -1;
    }
    for (int i = 0; i <= numItems(stack1); i++){
        if (stack1->items[i] != stack2->items[i]) {
            printf("The stacks are not equal.\n");
            return -1;
        }
    }
    printf("The Stacks are equal.\n");
    return 1;
}

void reverse(struct Stack* stack){
    int n = numItems(stack);
    printf("Reversing stack.\n");
    for (int i = 0; i < n / 2; i++) {
        int temp = stack->items[i];
        stack->items[i] = stack->items[n - i - 1];
        stack->items[n - i - 1] = temp;
    }
}

int main() {
    Stack* s1 = create(6);
    Stack* s2 = create(6);
    push(s1, 1);
    push(s1, 3);
    push(s1, 5);
    push(s1, 7);
    push(s1, 42);
    push(s1, 17);
    print(s1);
    print(s2);
    printf("Check whether s1 is full: %d\n", isFull(s1));
    printf("Check whether s2 is full: %d\n", isFull(s2));
    printf("Number of elements in s1: %d\n", numItems(s1));
    printf("Number of elements in s2: %d\n", numItems(s2));
    printf("Overflow test... ");
    push(s1, 99);
    printf("Element popped from s1: %d\n", pop(s1));
    printf("Element popped from s1: %d\n", pop(s1));
    printf("Element peeked from s1: %d\n", peek(s1));
    for (int i = 0; i < 4; i++) {
        push(s2, i + i + 1);
    }
    print(s1);
    print(s2);
    printf("Comparison of s1 with s2: %d\n", isEqual(s1, s2));
    printf("Element popped from s2: %d\n", pop(s2));
    printf("Comparison of s1 with s2: %d\n", isEqual(s1, s2));
    for (int i = 0; i < 4; i++) {
        pop(s1);
    }
    print(s1);
    print(s2);
    printf("Check whether s1 is empty: %d\n", isEmpty(s1));
    printf("Check whether s2 is empty: %d\n", isEmpty(s2));
    printf("Underflow test... ");
    pop(s1);
    printf("Underflow test... ");
    peek(s1);
    push(s2, 9);
    push(s2, 8);
    push(s2, 2);
    print(s2);
    reverse(s2);
    print(s2);
    return 0;
}
