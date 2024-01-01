#include <stdio.h>
#include <math.h>

typedef struct {
    int input;
    int isPrime;
} Number;

int checkPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    for( int i=3;i<=sqrt(n);i+=2){
        if (n%i==0) return 0;
    }
    return 1;
}

int main() {
    Number numbers[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i].input);
        numbers[i].isPrime = checkPrime(numbers[i].input);
    }
    for (int i = 0; i < 10; i++) {
        printf("Number: %d, Is Prime: %d\n", numbers[i].input, numbers[i].isPrime);
    }
    return 0;
}