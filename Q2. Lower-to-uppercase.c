// Write a C program that takes a single lowercase English letter as input and prints its corresponding uppercase letter.

// Use the ASCII value method to perform the conversion.

// Input Format

// A single lowercase character charLower.

// Constraints

// Input must be a lowercase English alphabet ('a' to 'z').
// Do not use built-in string or character functions like toupper() or strupr().
// Conversion must be done using ASCII value arithmetic.
// Output Format

// A single line in the format:

// The uppercase of {charLower} is {charUpper}

// Sample Input 0

// a
// Sample Output 0

// The uppercase of a is A

#include <stdio.h>
int main () {
    char l;
    char u;
    scanf("%c",&l);
    u=l-32;
    printf("The uppercase of %c is %c.",l,u);
    return 0;
}
