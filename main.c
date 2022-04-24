#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int func();
int main(){

printf("🍀🍀🍀👍 The luck game 👎🍀🍀🍀 \n");
printf("#🦧🤔💭 Guess the number 🦧🤔💭\n");
func();

return 0;
}
int func(){
int number, guess, nguesses=1, replay;
srand(time(0));
number = rand()%10 * 1;
do{
     printf("Number must be between 0 to 10\n");
     scanf("%d", &guess);
        
     if(guess>number){
        printf("Lower number please!◀️◀️ \n");
     }
     else if(guess<number){
         printf("Higher number please!▶️▶️ \n");
     }
     else{
         printf("💯 Correct guess 💯\n You guessed it in %d attempts 🍫🎇 \n", nguesses);
          printf("Do you want to play again 1 for yes, 2 for no\n");
          scanf("%d", &replay);
            if(replay==1 ){
              func();
                } 
               }
     nguesses++;
 }while(guess!=number);
return 0;
} 
