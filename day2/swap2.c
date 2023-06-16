#include <stdio.h>
#include <stdlib.h>

void swap(void* a, void* b, size_t size) {
    char* temp = (char*)malloc(size);
    char* ptr_a = (char*)a;
    char* ptr_b = (char*)b;

    for (size_t i = 0; i < size; i++) {
        temp[i] = ptr_a[i];
        ptr_a[i] = ptr_b[i];
        ptr_b[i] = temp[i];
    }

    free(temp);
}

int main() {
    // Swapping integers
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swapping: x = %d, y = %d\n", x, y);

    // Swapping characters
    char c1 = 'A', c2 = 'B';
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    // Swapping floating-point numbers
    float f1 = 3.14, f2 = 2.71;
    printf("Before swapping: f1 = %f, f2 = %f\n", f1, f2);
    swap(&f1, &f2, sizeof(float));
    printf("After swapping: f1 = %f, f2 = %f\n", f1, f2);

    return 0;
}