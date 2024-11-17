The ternary operator (? :) in C is a shorthand for an if-else statement

//syntax

// condition ? expression_if_true : expression_if_false;





int main() {
    int x = 10;
    int y = 20;
    int max;

    max = (x > y) ? x : y;  // If x > y, max = x; otherwise, max = y
    printf("The maximum value is: %d\n", max);
    return 0;
}


//Example 2: Check for Even or Odd

int main() {
    int num = 5;
    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");
    return 0;
}



//Example 3: Nested Ternary Operator

int main() {
    int a = 5, b = 10, c = 15;
    int max;

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The maximum value is: %d\n", max);
    return 0;
}

