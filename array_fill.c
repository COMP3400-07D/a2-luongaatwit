#include <stddef.h> // For NULL

/**
 * fill array with interger numbers in increasing order
 * @param array the array to fill
 * @param array_len length of array
 * @param begin the starting number of array
 * @param end the ending number of array
 * @return numbers filled into array
 */
int array_fill(int* array, int array_len, int begin, int end) {
    
    int count = 0;
    
    for (int num = begin; num <=end && count < array_len; num++) {
        array[count] = num;
        count++;

    }
}
