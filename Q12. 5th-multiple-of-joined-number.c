// You will be given four digits, each from 0–9.
// Your task is to combine them into a single 4-digit number in the same order and multiply it by 5 to get the final number.

// Important Instructions

// Do NOT write the entire logic in main().
// Create a function int buildNumber(int a, int b, int c, int d) and call it from main().
// Input Format

// Four digits: {A} {B} {C} {D}

// Constraints

// 0 ≤ each digit ≤ 9
// Output Format

// Single line printing the result as: The number is: {(ABCD)*5}

// Sample Input 0

// 1 2 3 4
// Sample Output 0

// The number is: 6170

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d) {
    int number = (a * 1000) + (b * 100) + (c * 10) + d;
    return number * 5;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int th, hu, ten, one;

    scanf("%d %d %d %d", &th, &hu, &ten, &one);

    printf("The number is: %d", buildNumber(th, hu, ten, one));

    return 0;

}
