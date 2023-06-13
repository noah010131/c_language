#include <stdio.h>
int main() {
 int a;
 double b;
 int i;
 double somme = 0;

	printf("insérer le nombre des matière \n\n");
	scanf("%d", &a);

 for (i = 1; i <= a; i++) {
	printf("le matière %d, la note est ", i);
	scanf("%lf", &b);
	somme = somme + b;
}
 printf("la moyenne de ces matière est %.2f \n", somme / a);

return 0;
} 
 
