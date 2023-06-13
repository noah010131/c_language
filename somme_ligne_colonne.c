#include <stdio.h>

int main(void)
{

 int arr[5][6] = {
                 { 1, 2, 3, 4, 5},
                 { 6, 7, 8, 9, 10},
                 { 11, 12, 13, 14, 15},
                 { 16, 17, 18, 19, 20 }
                 };
 
 int total1, total2;
 int i, j;



 for( i = 0; i < 5; i++)
 { 
 for( j = 0; j < 6; j++) total1 += arr[i][j];
 arr[i][5] = total1;
 total1 = 0;
 }


 for( i = 0; i < 6; i++)
 { 
 for( j = 0; j < 5; j++) total2 += arr[j][i];
 arr[4][i] = total2;
 total2 = 0;
 }


 for( i = 0; i < 5; i++)
 { 
 for( j = 0; j < 6; j++) printf("%5d", arr[i][j]);
 printf("\n");
 }

 return 0;

}


