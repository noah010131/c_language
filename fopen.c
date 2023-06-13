#include <stdio.h>

int main(void)
{
	
	char c;
	FILE *p;
	
	p = fopen("prime_number1.c", "r");
	if (p == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	printf("파일이 열렸습니다.\n\n\n\n\n\n");

	while(c != EOF)
	{

	 c = fgetc(p);
	 putchar(c);
	}

	fclose(p);


	return 0;
}
