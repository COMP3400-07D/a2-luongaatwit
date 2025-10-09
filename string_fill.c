#include <stddef.h> // For NULL

/**
 * fills character into and array
 * @param dest the destitnion of characters into array
 * @param dest_cap total capacity for the array
 * @param c character to fill the array 
 * @return void 
 */
void string_fill(char dest[], int dest_cap, char c) {
    if ( dest == NULL || dest_cap <= 0) { 
        return;
    }

    int i = 0;
    
    for (; i < dest_cap - 1; i ++) {
        dest[i] = c;
    }

    dest[i] = '\0';

}
