// Given a 3-digit number ABC, extract and print A, B, and C separately.

// Important Instructions

// Do NOT write the entire logic in main().
// Create a function void split(int n) and call it from main().
// Input Format

// A single 3-digit integer {ABC}

// Constraints

// 100 ≤ n ≤ 999
// Output Format

// Single line printing the output as: {A} {B} {C}

// Sample Input 0

// 456
// Sample Output 0

// 4 5 6

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void split ( int n ) {
    int h;
    int t;
    int o;
    h = n/100;
    t= (n/10) % 10;
    o = n%10;
    printf("%d %d %d", h,t,o);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    scanf("%d",&num);
    split(num);
    return 0;
}
