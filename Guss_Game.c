#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, num, no_ofguesses = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    //printf("The random number is %d\n", number);
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &num);
        if (num < number)
            printf("Your gussing number is less then actual number\n");
        else if (num > number)
            printf("Your gussing number is grater then actual number\n");
        else
            printf("Hurra....! correct number\n");
        no_ofguesses++;
    } while (num != number);
    printf("Your gussin %d time\n", no_ofguesses);
    return 0;
}