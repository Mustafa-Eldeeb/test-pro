
#include <stdio.h>
#include <stdlib.h>



void main()
{
    char guess, newline;
    char myWord [6] = {'a','p','p','l','e','\0'};               // Initialization of variables
    char dashedArray [6] = {'-','-','-','-','-','\0'};
    int totalTries = 5;
    int currentTries = 0;
    int i, j;

    printf("\nLet's play a game! The objective of the game is to guess my secret word. You will have five chances to guess.\n");
    printf("\nLet's get started!\n");

    for (i=0; i<totalTries; i++)
    {
        printf("\nPlease enter a letter: ");
        scanf("%c\n", &guess);

        for (j=0; j<6; j++)
        {
            if (guess == myWord[j])
                dashedArray[j] = guess;
        }

        printf("Result: %s", dashedArray);

    }

    printf("You lose.");
}
*/
