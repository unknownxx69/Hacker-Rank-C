// You are given two integers a and b.
// Your task is to determine whether they share the same last digit.

// Bonus Challenge: Try approach of not using modulo operator.

// Input Format

// Two space separated integers: {a} {b}

// Constraints

// 0 ≤ a, b ≤ 10^9
// Output Format

// You must print: "YES" or "NO"

// Sample Input 0

// 57 87
// Sample Output 0

// YES


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    int b;
    int c;
    int d;
    scanf("%d %d", &a, &b);
    c = a - (a/10) * 10;
    d = b - (b/10) * 10;
    if (c==d) {
        printf("YES");
    }
    else {
         printf("NO");
    }
    return 0;
}