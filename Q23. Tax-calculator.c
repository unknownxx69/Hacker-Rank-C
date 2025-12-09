// Aakash has recently started his new job and is extremely busy managing his work and tasks. As a result, he doesn’t have time to figure out his income tax calculations manually. To simplify this, he wants someone to create a reliable system that can calculate his income tax based on the Indian tax rules.

// The system should work as follows:

// If Aakash’s income is ₹2,50,000 or less, no tax should be calculated.
// For an income greater than ₹2,50,000 upto ₹5,00,000, the tax is 5% on the amount exceeding ₹2,50,000.
// For an income greater than ₹5,00,000 upto ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the amount exceeding ₹5,00,000.
// For an income above ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the next ₹5,00,000 above ₹5,00,000, 30% on the amount exceeding ₹10,00,000.
// The system should take his annual income as input and output the total tax payable. Additionally, if the input is invalid, the system should display "INVALID".

// Aakash expects this system to be efficient and user-friendly since he needs it to quickly determine his tax liability without any hassle. Your program should calculate the total tax payable based on these rules.

// Input Format

// A single floating-point number income representing the annual income

// Constraints

// -10^7 ≤ income ≤ 10^7

// Output Format

// If the income is valid, print the tax payable up to 2 decimal places.
// If the income is invalid, print "INVALID".



#include <stdio.h>
#include <float.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float income;
    float tax;
    float free = 0;
    float slab1;
    float slab2;
    float slab3;
    scanf("%f", &income);
    if (0<=income && 250000>=income) {
    printf("%.2f", free);
    }
    else if (250000<=income && 500000>=income){
        slab1 = income - 250000;
         tax = slab1 * 0.05;
        printf("%.2f", tax);
    }
    else if (500000<=income && 1000000>=income) {
        slab2 = (income - 500000) ;
        tax = (slab2 * 0.20) + 12500;
        printf("%.2f", tax);
    }
    else if (income>=1000000) {
    slab3 = (income - 1000000);
    tax = (slab3 * 0.30) + 112500;
    printf("%.2f", tax);
    }

    else {
        printf("INVALID");
    }
    return 0;
}