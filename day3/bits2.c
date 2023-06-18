#include <stdio.h>

void printBits(unsigned int num) {
    int i;
    for (i = 31; i >= 0; i--) {
        unsigned int mask = 1 << i;
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
    }
}
int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    printBits(num);
    return 0;
}