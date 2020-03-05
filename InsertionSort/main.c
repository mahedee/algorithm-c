/******************************************************************************
Insertion sort implementation using C 
using: https://www.onlinegdb.com/online_c_compiler#
*******************************************************************************/

#include <stdio.h>


int a[] = { 5, 2, 3, 1, 4 }; // Array to be sort
int size = 5; // size of the array

void insertionSort ()
{
    int n = size;
    
    for (int i = 1; i < n; i++)
    {
        // assin a[i] as item
        int item = a[i];
        
        //find out the suitable position for item
        int j = i-1;
        
        while(j >= 0 && item < a[j])
        {
            // keep a[j] to its next position a[j+1]
            a[j+1] = a[j];
            j--;
        }
        
        //a[j+1] is the suitable position for item
        //which is already made empty
        a[j+1] = item;
    }
}

int main ()
{
    insertionSort();
    
    //Print the array
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
