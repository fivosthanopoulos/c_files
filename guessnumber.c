#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(0)); 

 int x = rand() % 100 + 1;

 int i;
 int guess;
 
 for (i=1; i<=10; i++) {

     printf("Attempt %d: Guess a number ", i);
     scanf("%d", &guess);
     
     if (guess == x && i == 1) {
         printf("You found %d on first try", x);
         break;
     }

     else if (guess == x) {
         printf("You found the number %d on the %d try",x, i);
         break;
     }

     else {
     if(i == 9) {
        printf("You have one more try \n");
     }
     
      else if (guess < x) {
         printf("The number you're looking for is higher than %d\n", guess);
     }

     else if (guess > x) {
         printf("The number you're looking for is lower than %d\n", guess);
     } 
 }
 
 if ( i == 10 && guess != x) {
     printf("No more attempts. The number was %d", x);
 }
 }

 
    return 0;
}