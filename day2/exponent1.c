#include <stdio.h>

void printExponent(double x) {
    // Create a pointer to the double variable
    unsigned long long* ptr = (unsigned long long*)&x;

    // Get the binary representation of the double value
    unsigned long long bits = *ptr;

    // Extract the exponent bits
    unsigned long long exponent = (bits >> 52) & 0x7FF;

    // Print the exponent in hexadecimal format
    printf("Exponent part in hexadecimal: 0x%llx\n", exponent);

    // Print the exponent in binary format
    printf("Exponent part in binary: ");
    for (int i = 10; i >= 0; --i) {
        printf("%llu", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}