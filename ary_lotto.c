#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{

	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;

}

void input_nums(int *lotto_nums)
{

	int i, j;
	int count = 6;

	for( i = 0; i < count; i++)
	{
	
		printf("번호 입력: ");
		scanf("%d", lotto_nums + i);

	 for( j = 0; j < i; j++)
	 {
		 if( lotto_nums[i] == lotto_nums[j])
		 {
			printf("같은 번호가 있습니다!\n");
                 	count +=1;
                 	break;
		 }
	 }
	}
}

void print_nums(int *lotto_nums)
{

	int i;

	printf("로또 번호: ");

	for( i = 0; i < 6; i++) printf("%d   ", lotto_nums[i]);

	printf("\n");
}


