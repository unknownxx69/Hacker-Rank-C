// Write a program that takes a floating-point number and prints it without decimal values.

// Input Format

// Single float.

// Constraints

// N/A

// Output Format

// Single line printing the result as: Rounded Value = {value}

// Sample Input 0

// 3.14
// Sample Output 0

// Rounded Value = 3


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float num;
    scanf("%f", &num);
    int rounded = round(num);
    printf("Rounded Value = %d", rounded);
    return 0;
}
