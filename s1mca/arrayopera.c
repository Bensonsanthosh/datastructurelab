#include <stdio.h>


void insertElement(int arr[], int *size, int position, int element) {
    if (position < 0 || position > *size) {
        printf("Invalid position. Element not inserted.\n");
    } else {
        for (int i = *size; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = element;
        (*size)++;
        printf("Element %d inserted at position %d.\n", element, position);
    }
}


void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position. Element not deleted.\n");
    } else {
        printf("Element %d deleted from position %d.\n", arr[position], position);
        for (int i = position; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    }
}


void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100]; 
    int size = 0; 
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                int insPosition, insElement;
                printf("Enter position to insert: ");
                scanf("%d", &insPosition);
                printf("Enter element to insert: ");
                scanf("%d", &insElement);
                insertElement(arr, &size, insPosition, insElement);
                break;
            case 2:
                int delPosition;
                printf("Enter position to delete: ");
                scanf("%d", &delPosition);
                deleteElement(arr, &size, delPosition);
                break;
            case 3:
                displayArray(arr, size);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}


