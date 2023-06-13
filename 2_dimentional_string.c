#include <stdio.h>
#include <string.h>

int main(void)
{
 char animal[3][20];
 int i;
 
 strcpy (animal[0], "cat");
 strcpy (animal[1],"dog");
 strcpy (animal[2],"giraffe");
 
 for(i=0; i<3; i++)
  puts(animal[i]);

 return 0;
}

