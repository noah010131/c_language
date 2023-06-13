#include <stdio.h>
int main () {
	double celsius;

	printf("programme de changer celsious à Fahrenheit. \n\n\n\n\n");
	printf("insérer la valeur de température en celsious :");
	scanf("%lf", &celsius);

	printf("la température de %.2f est en Fahrenheit : %.2f \n", celsius, 9 * celsius / 5 + 32);
	return 0;
}

