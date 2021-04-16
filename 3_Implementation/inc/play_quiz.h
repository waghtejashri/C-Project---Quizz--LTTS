/** 
* @file play_quiz.h
* Quiz game application with 3 different function
*
*/
#ifndef __PLAY_QUIZ_H__
#define __PLAY_QUIZ_H__

#define MAX_STR_LEN 30

/**
* call the function 
* all function are void 
*/

// void playQuiz();

typedef struct quiz{
    char name[MAX_STR_LEN];     // for player name
    int scores;        // for score
    int rating;       // for stars rating
}q;


int help();

/**
*  startQuiz() function start quiz
* @param[in] name 
* @param[in] ans 
* take i name as a input
* choice as answer
*/
void startQuiz(struct quiz q);

/**
*  displayRecord calculate point and returns the total points
* @param[in] count 
* @param[in] name
* @param[in] rating 
* @return Result of operand1 * operand2
*/
int displayRecord(struct quiz q);


 #endif  /* #define __PLAY_QUIZ_H__ */