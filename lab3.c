/*PRG155
Andrew Santos 
Random number game */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* import random number.h*/
#ifndef RANDOMNUMBER_H
#define RANDOMNUMBER_H

#include <stdlib.h>

int GenerateRandomNumber(int max)
{
    srand(time(NULL));
    return rand() % max + 1;
}

#endif // RANDOMNUMBER_H

int getinput(int min, int max);
void playthegame(const char *playername);
int generatenum(int max);


int main()
{/*this piece of code greets the player*/
    char firstname[30], lastname[30];
    printf("Welcome To My Number Game");
    printf("Please Enter your first name here please: ");
    scanf("%29s", firstname);
    printf("Please enter you last name here please: ");
    scanf("%29s", lastname);



    char fullname[50];
    printf(fullname, sizeof(fullname), "%s%s", firstname, lastname);


    startgame(fullname);
    return 0;
}

int genrandonum(int max)
{
    return (rand() % max) + 1;
}

int getinput(int min, int max)
{
    int guessing;
    while (1){
        printf("Please enter your guess here please (%d-%d): ", min, max);
        if (scanf("%d", &guessing) != 1){
            printf("Sorry you cant input that. Please only input a numbr");
            while (getchar() != '\n');
        }else if (guessing < min || guessing > max){
            printf("Your Guessing is out of the range. Please choose a number in the set range");
        }else{
            return guessing;
        }
    }
}
/* this function down below makes it possible fr the user to play the game*/
void playgame(const char *playernam)
{
    int tar = genrannum(90);
    int attemp = 0, guesses;
    char playag;

    printf("I have picked a number between 1 and 90, Can you guess it correctly", playernam);

    while (1)
    {
        guesses = getvinput(1, 90);
        attemp++;

        if (guesses < tar){
            printf("Sorry thats too low %s. Please try again", playernam);
        }else if (guesses > tar){
            printf("Sorry that to high of a number %s Try again", playernam);
        }else{
            printf("Congrats, %s you have guessed the number correctly in %d try's", playernam, attemp);
            break;
    }
}

/* replay the game*/
printf("If you would like you can play again, (y/n): ", playernam);
scanf("%c", &playag);
if (playag == 'y' || playag == "Y") {
    printf("Nice have a nice time playing");
    playgame(playernam);
} else {
    printf("Thank you very much for playing my game i hope you enjoyed it and I hope to see you next time", playernam);

}