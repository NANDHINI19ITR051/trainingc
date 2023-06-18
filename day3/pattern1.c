#include <stdio.h>

void printSpaces(int n,int total) {
    for (int i = 1; i <= 2*(total-n); i++) {
        printf(" ");
    }
}

void printNumbers(int n,int total) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
            printSpaces(n,total);
    for (int i = n ; i >= 1; i--) {
        printf("%d", i);
    }
}

void generatePattern(int n) {
    for (int i = n; i >= 1; i--) {
        printNumbers(i,n);
        
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    generatePattern(n);
    return 0;
}