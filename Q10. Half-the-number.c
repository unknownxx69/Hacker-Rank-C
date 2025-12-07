// Write a program that takes an integer as input and print its half value as a floating-point number with 2 decimals.

// Input Format

// Single integer.

// Constraints

// Input can be positive or negative integer.
// Output should use float division.
// Output Format

// Print the data in the given format: Half of {num} is {halfValue}

// Sample Input 0

// 10
// Sample Output 0

// Half of 10 is 5.00

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<float.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    float half;
    scanf("%d",&num);
    half=num/2.0;
    printf("Half of %d is %.2f",num,half);
    return 0;
}