#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
   int number,guess,nguess=1;
   srand(time(0));
   number = rand()%100+1; //genrates random number between 1 to 100...
   //printf("The number is %d\n",number);
   // keep running until number is gussed.
   do{printf("guess the number between 1 to 100\n");
      scanf("%d",&guess);
      if(guess>number){
        printf("lower number please!\n");
      }
      else if (guess<number){
            printf("higher number please!\n");
      }
      else {
            printf("you guessed it in %d attempts\n",nguess);
      }nguess ++;


     }while(guess!=number);
   return 0;
   }
