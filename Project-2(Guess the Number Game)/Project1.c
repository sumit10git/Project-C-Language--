#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, nguesses = 0;
    srand(time(0));
    number = rand() % 10 + 1; // it will generate the random between 1 to 10
        //printf("the number is %d\n", number);
    // keep running the looop until the number is guessed
    do
    {
        printf("guess the number between 1 to 10\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please!\n");
        }
        else if (guess < number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("you guessed it in %d attempts\n");
        }
        nguesses++;

    } while (guess != number);
    return 0;
}