#include <stdio.h>

#define MAX_SIZE 10   // Maximum capacity of the list

typedef struct {
    int data[MAX_SIZE];
    int size;
} StaticList;

// Initialize the list
void initList(StaticList *list) {
    list->size = 0;
}

// Insert an element at a specific position
void insert(StaticList *list, int element, int position) {
    if (list->size >= MAX_SIZE) {
        printf("Error: List Overflow\n");
        return;
    }

    if (position < 0 || position > list->size) {
        printf("Error: Invalid Position\n");
        return;
    }

    // Shift elements to the right
    for (int i = list->size; i > position; i--) {
        list->data[i] = list->data[i - 1];
    }

    list->data[position] = element;
    list->size++;
}

// Delete an element at a specific position
void deleteElement(StaticList *list, int position) {
    if (list->size == 0) {
        printf("Error: List Underflow\n");
        return;
    }

    if (position < 0 || position >= list->size) {
        printf("Error: Invalid Position\n");
        return;
    }

    // Shift elements to the left
    for (int i = position; i < list->size - 1; i++) {
        list->data[i] = list->data[i + 1];
    }

    list->size--;
}

// Display the list
void display(StaticList list) {
    printf("List: [ ");
    for (int i = 0; i < list.size; i++) {
        printf("%d ", list.data[i]);
    }
    printf("]\n");
}

int main() {
    StaticList myList;

    initList(&myList);

    insert(&myList, 10, 0);   // [10]
    insert(&myList, 20, 1);   // [10, 20]
    insert(&myList, 15, 1);   // [10, 15, 20]

    display(myList);

    deleteElement(&myList, 0);  // [15, 20]

    display(myList);

    return 0;
}