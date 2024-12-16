#include <stdio.h>

int findElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {  
            return i;               
        }
    }
    return -1;  
}

int main() {
   
    int array[] = {5, 8, 12, 20, 7};
    int size = sizeof(array) / sizeof(array[0]);  
    int value = 20;
    int position = findElement(array, size, value);
    if (position != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri: %d\n", value, position);
    } else {
        printf("Gia tri %d khong co trong mang.\n", value);
    }

    return 0;
}

