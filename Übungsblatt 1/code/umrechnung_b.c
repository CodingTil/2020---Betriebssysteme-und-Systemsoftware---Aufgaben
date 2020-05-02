#include <stdio.h>

int main(void)
{
    double k = 1609.0 / 1000.0; /* Gleitkommakonstante zum Umrechnen */

    printf("Meilenwert | Kilometerwert\n");

	int i;
	for(i = 0; i <= 20; i+=2) {
		printf("%i", i);
		int j;
		for(j = 0; j < 8; j++) {
			printf(" ");
		}
		if(i < 10) {
			printf(" ");
		}

		printf(" | %6.2lf\n", k*i);
	}

    return 0;
}
