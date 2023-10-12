#ifndef __STRING_UTILITY_H__
#define __STRING_UTILITY_H__

typedef enum {
    VOWEL,
    CONSONANT,
    NON_ALPHABET
} char_type;

char_type check_character(char ch);
void check_string(char *str, int len);

#endif // __STRING_UTILITY_H__