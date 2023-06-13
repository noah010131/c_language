#include <stdio.h>

int main(void)
{

double a,b, res;
int i;
char os;
res = 1;

printf("사칙연산 입력(정수), 제곱도 가능합니다('^'이용),\n");
puts("\t'spacebar'를 사용하지 마세요 :");
scanf("%lf%c%lf", &a, &os, &b);


 switch(os){

	case '+':
	res = a + b;
	break;

	case '-':
	res = a - b;
	break;

	case '*':
	res = a * b;
	break;

	case '/':
	res = a / b;
	break;

	case '^':
	for(i = 1; i <= b; i++) res *= a; 
	break;
}

printf("%.0lf%c%.0lf = %.0lf\n", a, os, b, res);

return 0;

}
