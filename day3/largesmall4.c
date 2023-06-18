#include <stdio.h>

int findSmallestDigit(int num) {
    int smallest = 9;

    while (num != 0) {
        int digit = num % 10;
        
        if (digit < smallest) {
            smallest = digit;
        }
        
        num /= 10;
    }
    
    return smallest;
}

int findLargestDigit(int num) {
    int largest = 0;

    while (num != 0) {
        int digit = num % 10;
        
        if (digit > largest) {
            largest = digit;
        }
        
        num /= 10;
    }
    
    return largest;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Not Valid\n");
        return 0;
    }

    int numbers[n];
    printf("Enter %d numbers:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++) {
        int currentSmallest = findSmallestDigit(numbers[i]);
        int currentLargest = findLargestDigit(numbers[i]);
        if (currentSmallest == currentLargest) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", currentSmallest);
        printf("Largest Digit: %d\n", currentLargest);
    }
    }   
    return 0;
}