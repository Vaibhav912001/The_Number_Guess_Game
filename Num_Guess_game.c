#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n, x, guess = 1;
    srand(time(0));
    n = rand()%100 + 1;
    printf("Guess a number\n");
    scanf("%d", &x);
    while(x != n){
        if (x > n){
            printf("The number you guessed is larger\n");
            guess += 1;
        }
        if(x < n){
            printf("The number you guessed is smaller\n");
            guess += 1;
        }
        printf("Guess a number\n");
        scanf("%d", &x);

    }
    printf("The number of guesses = %d", guess);
    return 0;
}
