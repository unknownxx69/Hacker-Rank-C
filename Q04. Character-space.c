// Write a program that takes two lowercase characters and prints how many letters apart they are in the alphabet.

// Input Format

// Two lowercase characters char1 and char2 separated by space.

// Constraints

// Input letters are lowercase a–z
// char1 always comes before char2 in alphabetical order
// Use ASCII arithmetic only
// Output Format

// Single line printing the result as:
// The distance between {char1} and {char2} is {value}

// Sample Input 0

// a c
// Sample Output 0

// The distance between a and c is 2

#include<stdio.h>
int main () {
    char a,b;
    int c;
    scanf("%c %c",&a,&b);

    printf("The distance between %c and %c is %d.",a,b,c);
    return 0;

}
