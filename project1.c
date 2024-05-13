#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
       int random,guess;
       int no_of_guess=0;
       srand(time(NULL));
       printf("Welcom to the world of Guessing number:\n");
       random=rand()%100+1; //Genreatin number between  0 t0 100

      do{
        printf("\nPleause enter your guess between(1 to 100): ");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess < random){
            printf("Guess a larger number:\n");
        }
        else if(guess > random){
            printf("Gauess a smaller number.\n");
        }
        else{
                printf("Congratulation!!! You have sucessfully guessd the Number in %d attempts.",no_of_guess);
        }
      } while(guess != random);
    printf("\nBY BY, Thanks for playing\n");
    printf("Developed by: kaif alam");

return 0;
}
