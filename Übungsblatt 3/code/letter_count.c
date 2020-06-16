#include <stdio.h>

#define CHARACTERS 3
#define PRINT_INTERVAL 100

int main() {
    char c;
    int character_count[CHARACTERS] = {0};
    int count = 0;
    
    while ((c = getchar()) != EOF) {
        if (c - 'A' < CHARACTERS && c - 'A' >= 0) {
            character_count[c - 'A']++;
            count++;
        }

        if (count >= PRINT_INTERVAL) {
            for (int i = 0; i < CHARACTERS; i++) {
                fprintf(stdout, "%c: %d\n", 'A' + i, character_count[i]);
            }
            fprintf(stdout, "\n");
            fflush(stdout);
            count = 0;
        }
    }
}