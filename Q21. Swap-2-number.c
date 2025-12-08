// Write a program to swap two numbers.

// Input Format

// Two unique integers a and b

// Constraints

// -10^6 <= a <= 10^6
// -10^6 <= b <= 10^6
// Output Format

// Two lines printing the swapped values of a and b

// Sample Input 0

// 10 5
// Sample Output 0

// a = 5
// b = 10


#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    c = b;
    b = a;
    printf("a = %d \nb = %d", c ,b);
    
    return 0;
}