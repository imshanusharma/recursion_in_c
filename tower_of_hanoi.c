/* Program to solve tower of hanoi problem
 *
 * Compilation : gcc -o toh tower_of_hanoi.c
 * Execution : ./toh
 *
 * @Ujjwal, 1910991390, 04/08/2021
 * Assignment 5 (Recursion in C)
 */

#include <stdio.h>

/* Function to print the movements of disks.
 *
 * paramater:
 * n = number of disks
 * from = (char variable) initial tower from which we have to move disks.
 * to = (char variable) final tower to which we have to move all the disks.
 * aux = (char variable) tower in which we can store disks temporarily.
 *
 * return:
 * print individual movement
 * return total number of movements
 */

int tower_of_hanoi(int n, char from, char to, char aux) {

    int count = 0;
    if(n > 0)
    {
	count = tower_of_hanoi(n-1, from, aux, to);
	printf("%c  to  %c\n",from,to);
	count++;
	count += tower_of_hanoi(n-1, aux, to, from);
    }
    return count;
}

int main() {

    int count = 0;
    printf("Total Movements: %d",tower_of_hanoi(3,'A','C','B'));
    return 0;
}
