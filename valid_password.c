#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h>
/**
 * checks if password is valid following the rules
 * between 6-10 words
 * has 2 upper and 2 lowercase
 * only numbers and letters
 * 
 * @param s password input 
 * @return true if passwrod passses, retrurns false if fails
 */
bool valid_password(const char* s) {
    if (s == NULL) {
        return NULL;
    }
    int length = 0;
    int upper = 0;
    int lower =0;

    for (int i = 0; s[i] != '\0';i++) {
        char c = s[i];
        length++;

        if(isupper(c)) upper++;
        else if(islower(c)) lower++;
        else if (!isdigit(c)) {
            return false;
        }
        
        }

        if (length >= 6 && length <=10 && upper >=2 && lower >=2) {
            return true;
        }
        return false;
    }
