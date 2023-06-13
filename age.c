#include <stdio.h>
int main () {
	int i ;

	printf("제 나이를 맞춰보세요! : ");
	scanf("%d", &i);
for (;;)	 
	if (i >= 25){
	printf("와...제가 그렇게 노안인가요?! 다시 생각헤봐여! \n");
	scanf("%d", &i);

} else if (i < 21) {
	printf("와 기분은 너무 좋지만 제 나이는 아니네요..ㅎ 기회를 다시 한번만 더 드릴께요! \n");
	scanf("%d", &i);

} else if (i > 22 && i < 25) {
	printf(" 제 나이에 거의 근접했어요! 좀만 더 생각해봐요! \n");
	scanf("%d", &i);

} else { 
	printf("오...스토커인가요? 기분 나빠여! 저리가요! \n");
	break;
}
return 0;
}
