// You are given hours, minutes, and seconds.
// Convert the entire time into total seconds.

// Important Instructions

// Do NOT write the entire logic in main().
// Create a function int toSeconds(int hours, int minutes, int seconds) and call it from main().
// Input Format

// Three space-separated integers: {hours} {minutes} {seconds}

// Constraints

// 0 ≤ hours ≤ 100
// 0 ≤ minutes < 60
// 0 ≤ seconds < 60
// Output Format

// Single line printing the result as:
// Total seconds: {res}

// Sample Input 0

// 1 0 0
// Sample Output 0

// Total seconds: 3600

#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int intoSeconds(int hours, int min, int sec) {
    scanf("%d %d %d", &hours, &min, &sec);
    int res;
    res=(hours*60*60) + (min*60) + (sec);
    return res;
    
}
int main(){
    int a,b,c;
    printf("Total seconds: %d",intoSeconds(a,b,c));
    return 0;
}