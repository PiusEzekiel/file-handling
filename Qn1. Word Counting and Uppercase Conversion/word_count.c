#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int word_count = 0;
    int in_word = 0; // Flag to track if we're currently inside a word

    fp = fopen("rando_word.txt", "r"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) { // Check if the character is whitespace
            in_word = 0;
        } else if (!in_word) { // If not in a word, start a new word
            word_count++;
            in_word = 1;
        }
    }

    fclose(fp);
    printf("Number of words: %d\n", word_count);
    return 0;
}