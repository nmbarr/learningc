#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

#define LENGTH 26

int main(void) {

    int first_word[LENGTH] = {0};
    int second_word[LENGTH] = {0};
    char ch;
    int i;
    bool is_anagram = true;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            first_word[ch - 'a']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            second_word[ch - 'a']++;
        }
    }

    for (i = 0; i < LENGTH; i++) {
        if (first_word[i] != second_word[i]) {
            is_anagram = false;
            break;
        }
    }

    if (is_anagram) {
        printf("The words are anagrams.\n");
    } 
    else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}