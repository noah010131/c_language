#include <stdio.h>
#include <math.h>
int main () {
double a;
double b;
double c;
	printf("C'est la progrmme qui permet de trouver la solution de votre équation du second dégré \n");
	printf("insérer a, b et c de votre équation du second dégré : Ax*2+Bx+C \n");
	scanf("%lf  %lf  %lf", &a, &b, &c);

double X1, X2;

X1 = (-b + (sqrt(b*b-4*a*c)))/(2*a);
X2 = (-b - (sqrt(b*b-4*a*c)))/(2*a);
	printf("la valeur de x est %lf et %lf \n", X1, X2);

	printf("Si vous recevez le message 'nan', cela veut dire qu'il n'y a pas de solution dans votre équation \n");

return 0;
} 
