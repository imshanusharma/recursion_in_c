/* Program to implement fibonacci series and print every third element in the series
 *
 * Compilation : gcc -o fibonacci fibonacci.c
 * Execution : ./fibonacci
 *
 * @Ujjwal, 1910991390, 02/08/2021
 * Assignment 5 (Recursion)
 */

#include <stdio.h>

/* Print fibonacci series upto n using recursion*/

int fibonacci(int n) {

    if(n == 0)
    {
	return 0;
    }
    else if(n == 1)
    {
	return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

    int n;
    int value;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    for(int i = 1; i <= n*3; i++) 
    {
	//Printing only the 3rd element n times
	
        value = fibonacci(i);   
	if(i%3==0)
	{
	    printf("%d ",value);
	}
    }

    return 0;
}
