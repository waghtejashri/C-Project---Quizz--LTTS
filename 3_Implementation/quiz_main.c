/*
* This is main program for quiz game.
* main function written here.
* and call the src functions.
*/
#include "play_quiz.h"
#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>

// struct quiz {  
//     char name[20];      // for player name
//     int scores;        // for score
//     int rating;       // for stars rating
// };  

// int displayRecord();
// void startQuiz();
// int help();
void playQuiz();

int main()
{
    system("cls");
    printf(" *** *** *** ***  Quiz Game  *** *** *** *** \n");
    printf("\n");
    printf("\n *** *** ***  Welcome to Quiz Game  *** *** ***");
    printf("\n\n");
    printf("\n\t\t   Have Fun!!!    ") ;
    printf("\n _______________________________________________");

    playQuiz();
    return 0;
}

void playQuiz()
{
    struct quiz q1;
    int option;
    // main_menu:           // goto definition to jump on main menu. 
    printf("\n _______________________________________________");
    printf("\n\t > Press - 1 to start the game");
    printf("\n\t > Press - 2 to view the highest score  ");
    // printf("\n\t > Press - R to reset score");
    printf("\n\t > press - 3 for help            ");
    printf("\n\t > press - 4 to quit             ");
    printf("\n _______________________________________________\n\n");
    
    scanf("%d", &option);
    if(option==1){
        system("cls");
		// printf("\n ~ Resister your name : ");
    	// gets(name);
        startQuiz(q1);
    }
    else if (option==2)
	{
		int ch = displayRecord(q1);
        if(ch==1)  
        {  
            playQuiz();  
        }  
        else  
        {  
            exit(1);  
        }   
		// goto main_menu;
	}
     else if (option==3)
	{
		int ch = help();
        if(ch==1)  
        {  
            playQuiz();  
        }  
        else  
        {  
            exit(1);  
        }  
		// goto main_menu;
	}

	else if (option==4)
		exit(1);

    else {
        exit(1);
    }
}
