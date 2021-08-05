/* Program to sort an array using selection sort using recursion.
 *
 * Compilation: gcc -o selection recursive_selection_sort.c
 * Execution: ./selection
 *
 * @UJJWAL, 1910991390, 05/08/2021
 * Assignment 5 (Recursion in C)
 */

#include <stdio.h>
#include <stdlib.h>

/* Function to swap two numbers */

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/* Function to sort array using selection sort
 *
 * parameters :
 * arr[] : array of integer numbers
 * size : size of array
 * i : starting index of array
 *
 * return:
 * sorted array
 */

void recursive_selection_sort(int arr[],int size,int i) {

    int min;
    
    //checking if we have reached the end of array or not

    if(i >= size - 1)
    {
	return;
    }

    // assuming i'th element is the minimum element
    
    min = i;

    //checking the rest of array for element minimum than the assumed minimum element

    for(int j = i+1; j < size; j++)
    {
	if(arr[j] < arr[min])
	{
	    min = j;
	}
    }

    //swapping the found minimum element with the previous minimum element
    
    swap(&arr[i],&arr[min]);
    recursive_selection_sort(arr,size,i+1);
}

int main() {

    int size;
    
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    //generating n random elements for array

    for(int i = 0; i < size; i++)
    {
	arr[i] = rand()/1000000;
    }

    recursive_selection_sort(arr,size,0);
    
    //printing sorted array

    for(int i = 0; i < size; i++)
    {
	printf("%d ",arr[i]);
    }
    return 0;
}
