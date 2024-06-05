#include <stdio.h>


int string_comparison(char *string1, char *string2) {
    // use while to iterate through each character in both strings
    while (*string1 && *string2) {
        // check if each character in both strings match each other
        if (*string1 != *string2) {
            return 0; // exit if one of the charactes does not match
        }
        // increment to the next character of each string
        string1++;
        string2++;
    }
    // the string terminator should occur at the same position if they are equal
    return (*string1 == '\0' && *string2 == '\0'); 
}

int main() {

    char string1[] = "This is a string.";
    char string2[] = "This is a string.";

    if (string_comparison(string1, string2)) {
        printf("Strings are equal\n");
    }
    else {
        printf("Strings are Not Equal\n");
    }
}