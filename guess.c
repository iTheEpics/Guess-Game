#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main(){

    int secretNumber = 9;
    int guess;
    int attempt = 0;
    int maxAttempts = 3;

    while (guess != secretNumber)
    {
        if (attempt == maxAttempts)
        {
            printf("You have reached max attempts!\n");
            return 1;
        }
        
        printf("Guess a number: ");
        scanf("%d", &guess);
        attempt ++;

        
    }
    printf("You win!\n");

    


    return 0;/*test*/
}