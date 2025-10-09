#include <stddef.h> // For NULL
#include <stdlib.h>

/**
 * makes an array filled with even numbers in increasign order
 * @param begin starting nubmer in the array
 * @param end ending number of array
 * @return arr returns an filed array with even numbers
 */
int* array_create_evens(int begin, int end) {
    
    if (begin > end) { 
        return NULL;
    }
    
    int first_even;
    
    if (begin %2 == 0) {
        first_even = begin;
    } else {
        first_even = begin + 1;
    }
    if (first_even > end){
        return NULL;
    }
    int count = ((end - first_even)/2) + 1; 
    
    int *arr = malloc( sizeof(int) * count);

    if (arr == NULL) { 
        return NULL;
    }
    for (int i = 0; i < count; i++ ) {
        arr[i] = first_even + 2 * i;


    }
    return arr; 
}
