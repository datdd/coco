#include <stdio.h>
#include "string_utility.h"

// Checking if the character ch is a vowel or not.
char_type check_character(char ch) {
    char_type ch_t;

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U') {
        printf("The character %c is a vowel.\n", ch);
        ch_t = VOWEL;
    }
    else if (('A' < ch && 'Z' > ch) || ('a' < ch && 'z' > ch)){
        printf("The character %c is a consonant.\n", ch);
        ch_t = CONSONANT;
    }
    else {
        printf("The character %c is not an alphabet character.\n", ch);
        ch_t = NON_ALPHABET;
    }

    return ch_t;
}

void check_string(char *str, int len) {
    int vowel_counter = 0;
    int consonant_counter = 0;

    for (int i = 0; i < len; i++) {
        char_type type = check_character(str[i]);
        if (VOWEL == type) {
            vowel_counter++;
        }
        else if (CONSONANT == type) {
            consonant_counter++;
        }
    }

    printf("There are %d vowel characters and %d consonant characters in the sentense: %s\n",
           vowel_counter, consonant_counter, str);
}
