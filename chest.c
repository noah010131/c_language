#include <stdio.h>

int main(void)

{

int age, chest;
char size;

printf("insérer votre age et votre taille :");
scanf("%d%d", &age, &chest);

if (age < 20) {

	if (chest < 85) size = 'S';
	else if ((chest >=  85) && (chest < 95)) size = 'M';
	else size = 'L';
}

else {

	if (chest < 90) size = 'S';
	else if ((chest >= 90) && (chest < 100)) size = 'M';
	else size = 'L';
}

printf("사이즈는 %c 입니다.\n", size);

return 0;

} 
