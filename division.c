#include <stdio.h>
int main() {
  double i, j;
  printf("insérez les deux chiffres que vous voulez les diviser : ");
  scanf("%lf %lf", &i, &j);
	
  if (j ==0) {
	printf("nous ne pouvons pas diviser par 0. \n");
	return 0;
}
  printf("le résultat de la division de deux chiffres est : %f \n", i / j);

  return 0;
}
