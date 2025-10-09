#include <stddef.h> // For NULL
#include <stdlib.h>
#include <ctype.h>
/**
 * takes any only lowercase letter and capitializes into uppercase letters
 * @param s inputs a string 
 * @return uppercases string 
 */
char* capitalize(const char* s) {
    if (s == NULL) {
        return NULL;
    }

    int length = 0;
    
    while (s[length] != '\0') {
        length++;
    }

    char *result = malloc(sizeof(char) * (length + 1 ));
    if (result == NULL) { 
        return NULL;
    }

    for (int i = 0; i < length; i++ ) {
        if (s[i] >='a' && s[i] <='z') {
            result[i] = toupper(s[i]);
        }
        else {
            result[i] = s[i];
        }
    }
    result[length] = '\0';

    return result;
}

 