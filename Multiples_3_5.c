#include "stdio.h"
/* find the sum of all numbers that are divisible by 3 or 5 less than 1000 */
int main(void) {
   int i;
   int total = 0 ;
   int var;
   
   for (i=1;i<1000;i++){
   if (i % 3 == 0 || i % 5 == 0){
   	total += i;
   }
   }
   
   	printf("%d\n",total);
    return 0;
}
