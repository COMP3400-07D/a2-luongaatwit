#include <stddef.h> // For NULL

/**
 * concat src 2 to src 1 without having to go over src1 capicity 
 * @param src1 the one that is being appended too
 * @param src1_cap total cap of src1
 * @param src2 to add to src1
 * @return void
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src2 == NULL) {
        return;
    }


    int len1 = 0;

    while( src1[len1] != '\0' && len1 < src1_cap) {
        len1++;
    }

    int i = 0; 

    while (src2[i] != '\0' && (len1 + i) < (src1_cap - 1)) {
        src1[len1 + i] = src2[i];
        i++;
    }
   if (len1 + i < src1_cap) {
    src1[len1 + i] = '\0';
   } else if (src1_cap > 0) {
    src1[src1_cap - 1] = '\0';
   }
}

