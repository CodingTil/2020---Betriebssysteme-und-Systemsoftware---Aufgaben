#include <stdio.h>
#define NUM_LINES 4
#define MAX_CHARS 50

// not allowed to use index operator []
//ignore the case when the string is empty
void correct_last_character(int num_lines, int max_chars, char c[num_lines][max_chars])
{
	int line;
	int ch;
    for(line = 0; line < num_lines; line++) {
		// \0 markiert das ende eines strings
		ch = 0;
		while(*(*(c + line) + ch) != '\0') {
			ch++;
		}
		*(*(c + line) + ch - 1) = 'y';
	}
}

int main(void)
{
    char lyrics[NUM_LINES][MAX_CHARS] = {"Yesterdai",
                          "All my troubles seemed so far awai",
                          "Now it looks as though they're here to stai",
                          "Oh I believe in yesterdai"};

    correct_last_character(NUM_LINES, MAX_CHARS, lyrics);

    for (int i = 0; i < NUM_LINES; i++)
    {
        printf("%s\n", lyrics[i]);
    }
}
