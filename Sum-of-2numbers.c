// Write a program that takes two integers as input and prints their sum.

// Input Format

// Two unique integers a and b.

// Constraints

// -10^4 ≤ a, b ≤ 10^4
// Inputs will always be valid integers
// Output Format

// Single line printing the result as: The sum of {a} and {b} is {sum}.

// Sample Input 0

// 3 5
// Sample Output 0

// The sum of 3 and 5 is 8.

#include <stdio.h>
int main () {
    int a;
    int b;
    int res;
    scanf("%d",&a);
    scanf("%d",&b);
    res=a+b;
    printf("The sum of %d and %d is %d.",a,b,res);
    return 0;
}