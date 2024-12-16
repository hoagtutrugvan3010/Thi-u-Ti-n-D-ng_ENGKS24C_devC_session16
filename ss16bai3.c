#include <stdio.h>

void calculateSum(int a, int b, int *result) {
    *result = a + b;  
}

int main() {
    int num1 = 15, num2 = 25;
    int result = 0;  
    calculateSum(num1, num2, &result);
    printf("Tong cua %d va %d la: %d\n", num1, num2, result);

    return 0;
}

