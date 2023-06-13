#include <stdio.h>

int main(void)
{

	char small, cap = 'G';

	if((cap >= 'A') && (cap <= 'Z')) small = cap + ('a' - 'A');
	
	printf("majuscule : %c %c", cap, '\n');
	printf("miniscule : %c\n", small);

	return 0;
}



