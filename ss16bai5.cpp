#include <stdio.h>
void updateElement(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        *(arr + position) = newValue;  
    } else {
        printf("Vi tri %d khong hop le!\n", position); 
    }
}

void printArray(int *arr, int size) {
    printf("Mang hien tai: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  
    }
    printf("\n");
}

int main() {
   
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);  
    printf("Mang ban dau:\n");
    printArray(array, size);
    int newValue = 10; 
    int position = 2;  
    updateElement(array, size, newValue, position);
    printf("\nSau khi cap nhat:\n");
    printArray(array, size);

    return 0;
}

