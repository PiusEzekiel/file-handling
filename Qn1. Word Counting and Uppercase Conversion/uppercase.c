#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp_in, *fp_out;
    char ch;

    fp_in = fopen("rando_word.txt", "r");
    if (fp_in == NULL) {
        printf("Error opening input file!\n");
        exit(1);
    }

    fp_out = fopen("uppercase_file.txt", "w");
    if (fp_out == NULL) {
        printf("Error opening output file!\n");
        exit(1);
    }

    while ((ch = fgetc(fp_in)) != EOF) {
        fputc(toupper(ch), fp_out); // Convert to uppercase and write to output file
    }

    fclose(fp_in);
    fclose(fp_out);
    printf("File converted to uppercase!\n");
    return 0;
}