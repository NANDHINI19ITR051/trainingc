#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int place = 1000;
    for (int i = 0; i < 4; i++) {
        int newNum = num / (place * 10) * place + (num % place);
        if (newNum > largest) {
            largest = newNum;
        }
        
        place /= 10;
    }
    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    int largest = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largest);
   
    return 0;
}