#include <stdio.h>

int main() {
    int num = 20;
    int *ptr = &num;
    printf("Cach 1 (truc tiep):\n");
    printf("Gia tri cua num: %d\n", num);          
    printf("Dia chi cua num: %p\n", (void*)&num); 
    printf("\nCach 2 (thong qua con tro):\n");
    printf("Gia tri cua num (qua con tro): %d\n", *ptr);   
    printf("Dia chi cua num (qua con tro): %p\n", (void*)ptr); 
    return 0;
}
