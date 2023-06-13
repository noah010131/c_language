#include <stdio.h>

int main(int argc, char **argv)
{

 int i;
 
 for( i = 0; i < argc; i++) printf("당신이 입력한 문자는 : %s\n", argv[i]);

 return 0;

}
