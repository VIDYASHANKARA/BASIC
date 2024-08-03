/******************************************************************************

We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess,i=1,attempts=0;
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    // Print the random number
    printf("Random number between 1 and 100: %d\n", randomNumber);
    
    printf("I have created a random number between 1 to 100 take a guess: \n");
    while(i=1)
    {
        printf("\nGuess %d: ",attempts+1);
        scanf("%d",&guess);
        attempts++;
        if(guess==randomNumber)
        {
            printf("\nYou got it right you took %d attempts",attempts);
            i--;
            break;
        }
        else if(guess>randomNumber)
        {
            printf("\nGuess is too high");
        }
        else if(guess<randomNumber)
        {
            printf("\nGuess is too low");
        }
    }
    
    
    

        return 0;
}
