#include "play_quiz.h"
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int help()     // function to show instruction and rule.
{  
    int ch;  

    printf("\n\n *** *** *** ******  HELP ****** *** *** ***");  
    printf("\n _______________________________________________");  
    printf("\n\n .................  The Quiz Game  .............\n");  
    printf("\n > There will be a total of 10 questions.");  
    printf("\n > You will be given 4 options and you have to press 1, 2 ,3 or 4 for the \n    right option.");  
    printf("\n > For each correct question will carry 5 points.");  
    printf("\n > You will be asked questions continuously if you keep giving the right \n    answers.");  
    printf("\n > There is no negative marking for wrong answer.");  
  
    printf("\n\n *********************    BEST OF LUCK    **********************\n\n");  
  
  
    printf("\nWant to Continue? (1-Yes / 0-No) :  ");  
    scanf("%d",&ch);  
  
    return ch;
}  
  
void startQuiz(struct quiz q)        // function to start quiz, enter your name and answer the appeare question.
{
    int ans;  
    int count=0;  
    // char rating, scores;  
    // char name[30];

    FILE *fp;  

    if((fp=fopen("game1.txt","a"))==NULL)  
    {  
        printf("error opening file\n");  
    }  


    printf("\nRegister your name : ");  
    scanf("%s",q.name);  

    printf("\n**************   Welcome \" %s \" to Quiz Game   **************** \n\n", q.name);  

    printf("1).Grand Central Terminal, Park Avenue, New York is the world's: \n\n1.largest railway station \n2.highest railway station \n3.longest railway station \n4.None of the above\n\n");  

    printf("Your answer: ");  
    scanf("%d",&ans);  

    if(ans==1)  
    {  
        printf("Correct!\n\n");  
        ++count;  

    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 1.largest railway station\n\n");  
    }  

    printf("2).Entomology is the science that studies: \n\n1.Behavior of human beings\n2.Insects \n3.The origin and history of technical and scientific terms \n4.The formation of rocks\n\n");  
    printf("Your answer: ");  
    scanf("%d",&ans);  

    if(ans==2)  
    {  
        printf("Correct!\n\n");  
        ++count;  

    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 2.Insects\n\n");  
    }  

    printf("3).Eritrea, which became the 182nd member of the UN in 1993, is in the continent of - \n\n1.Asia \n2.Africa \n3.Europe \n4.Australia\n\n");  

    printf("Your answer: ");  
    scanf("%d",&ans);  

    if(ans==2)  
    {  
        printf("Correct!\n\n");  
        ++count;  
    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 2.Africa\n\n");  
    }  

    printf("4).Garampani sanctuary is located at___ \n\n1.Junagarh, Gujarat \n2.Diphu, Assam \n3.Kohima, Nagaland \n4.Gangtok, Sikkim\n\n");  
    printf("Your answer: ");  
    scanf("%d",&ans);  
    if(ans==2)  
    {  
        printf("Correct!\n\n");  
        ++count;  
    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 2.Diphu, Assam\n\n");  
    }  

    printf("5).For which of the following disciplines is Nobel Prize awarded? \n\n1.Physics and Chemistry \n2.Physiology or Medicine \n3.Literature, Peace and Economics \n4.All of the above\n\n");  
    printf("Your answer: ");  
    scanf("%d",&ans);  
    if(ans==4)  
    {  
        printf("Correct!\n\n");  
        ++count;  
    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 4.All of the above\n\n");  
    }  

    printf("6).Hitler party which came into power in 1933 is known as - \n\n1.Labour Party \n2.Nazi Party \n3.Ku-Klux-Klan \n4.Democratic Party\n\n");  
    printf("Your answer: ");  
    scanf("%d",&ans);  
    if(ans==2)  
    {  
        printf("Correct!\n\n");  
        ++count;  
    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 2.Nazi Party\n\n");  
    }  

    printf("7).FFC stands for -  \n\n1.Foreign Finance Corporation \n2.Film Finance Corporation \n3.Federation of Football Council \n4.None of the above\n\n");  
    printf("Your answer: ");  
    scanf("%d",&ans);  
    if(ans==2)  
    {  
        printf("Correct!\n\n");  
        ++count;  
    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 2.Film Finance Corporation\n\n");  
    }  

    printf("8).Fastest shorthand writer was - \n\n1.Dr. G. D. Bist \n2. J.R.D. Tata \n3. J.M. Tagore \n4. Khudada Khan\n\n");  
    printf("Your answer: ");  
    scanf("%d",&ans);  
    if(ans==1)  
    {  
        printf("Correct!\n\n");  
        ++count;  
    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 1.Dr. G. D. Bist\n\n");  
    }  

    printf("9).Epsom (England) is the place associated with \n\n1.Horse racing \n2.Polo \n3.Shooting \n4.Snooker\n\n");  
    printf("Your answer: ");  
    scanf("%d",&ans);  
    if(ans==1)  
    {  
        printf("Correct!\n\n");  
        ++count;  
    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 1.Horse racing\n\n");  
    }  

    printf("10).First human heart transplant operation conducted by Dr. Christian Bernard on Louis Washkansky, was conducted in \n\n1.1967 \n2.1968 \n3.1958 \n4.1922\n\n");  
    printf("Your answer: ");  
    scanf("%d",&ans);  
    if(ans==1)  
    {  
        printf("Correct!\n\n");  
        ++count;  
    }  
    else  
    {  
        printf("Wrong answer! Correct answer is 1. 1967\n\n");  
    }  

    //counting number of correct answers and, ratings  
    if(count > 0)  
    {  
        printf("%s Your scored: %d points     \t", q.name, count*5);  
        q.scores=count*5;  

        if(q.scores >= 40)  
        {  
            printf("Rating: * * * * *");  
            q.rating=5;  
        }  
        else if(q.scores >= 30 && q.scores < 40)  
        {  
            printf("Rating: * * * *");  
            q.rating=4;  
        }  
        else if(q.scores >= 20 && q.scores < 30)  
        {  
            printf("Rating: * * *");  
            q.rating=3;  
        }  
        else if(q.scores >= 10 && q.scores < 20)  
        {  
            printf("Rating: * *");  
            q.rating=2;  
        }  
        else if(q.scores < 10)  
        {  
            printf("Rating: *");  
                q.rating=1;  
        }  
    //writing to file  
        fprintf(fp,"%s %d %d", q.name, q.scores, q.rating);  
        fclose(fp);  
    }  
    else  
    {  
        printf("Try again!");  
    }  
}

int displayRecord(struct quiz q)            // Function to show previous highest record
{  
    int ch;  
    FILE *fp;  
    if((fp=fopen("score.txt", "r"))==NULL)  
    {  
        printf("\nNo games played yet!\n");  
    }  
    else  
    {  
        printf("\n-----------------------  HIGH SCORES  -------------------------\n\n");  
        printf("NAME     POINTS     RATING\n");  
        while(fscanf(fp,"%s %d %d",q.name, &q.scores, &q.rating) !=EOF)  
        {  
            printf("____________________________\n");  
            printf("%s     %d     %d star(s)\n\n",q.name, &q.scores, &q.rating);  
        }  
        fclose(fp);  
    }  

    printf("\nWant to Continue? (1 - Yes / 0 - No) :  ");  
    scanf("%d",&ch);  
    
    return ch;
}