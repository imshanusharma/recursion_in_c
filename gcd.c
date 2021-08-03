/* Program to find the GCD of two numbers using recursion
 *
 * Compilation : gcc -o gcd gcd.c
 * Execution : ./gcd
 *
 * @Ujjwal, 1910991390, 03/08/2021
 * Assignment 5 (Recursion in C)
 */

#include <stdio.h>

/*Function to find GCD recursively
 *
 * parameters
 * num1 = first number
 * num2 = second number
 *
 * return
 * GCD of given two numbers
 */

int gcd(int num1, int num2) {

    if(num1 == 0)
	return num2;
    else if(num2 == 0)
	return num1;
    else if(num1 == num2)
	return num1;
    else if(num1 > num2)
	return gcd(num1-num2,num2);
    return gcd(num1,num2-num1);
}

int main() {

    int num1;
    int num2;
    int value;

    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    value = gcd(num1,num2);
    printf("GCD : %d",value);
    
    return 0;
}
