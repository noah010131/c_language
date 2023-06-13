#include <stdio.h>

int main(void)

{

  int hour, min, sec;
  double time = 3.76;

 hour = (int)time;	 // hour = 3
 time = time - hour;	 //3.76 - 3 = 0.76
 time *= 60;	 	 //time = 0.76*60 = 45,6

 min = (int)time; 	 // min = 45
 time -= min;	         // time = 45.6 - 45 = 0.6
 time *= 60;

 sec = (int)time;

 printf("3.76 시간은 %d시간 %d분 %d초 입니다.\n", hour, min, sec);

return 0;

}
