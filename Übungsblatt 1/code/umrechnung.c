#include <stdio.h>

int main(void)
{
    double k = 1609.0 / 1000.0; /* Gleitkommakonstante zum Umrechnen */

    printf("Entfernung in Meilen: ");
    double kilometer; /* Gleitkommavariable */
    scanf("%lf", &kilometer);

    double meilen = k * kilometer;

    printf("...ergibt in Kilometer ca: %6.2lf\n", meilen);

    return 0;
}
