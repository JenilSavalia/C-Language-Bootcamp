#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1. Factorial of a Number
	
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}


//2. Fibonacci Series

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case 1
    } else if (n == 1) {
        return 1; // Base case 2
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main() {
    int num = 10;
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}


//3. Sum of Natural Numbers


int sum(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 is 0
    }
    return n + sum(n - 1); // Recursive case
}

int main() {
    int num = 5;
    printf("Sum of first %d natural numbers is %d\n", num, sum(num));
    return 0;
}







