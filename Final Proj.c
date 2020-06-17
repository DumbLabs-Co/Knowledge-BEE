/* KNOWLEDGE BEE

DSA PROJECT
BY: GAGAN CHORDIA
REG.NO: 19BCE0788
*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<afxres.h>

void edit_score(float score, char player_name[100]) //edits the score if the new score is greater than the previous score present in the data.
{
    system("cls");
	float sc;
	char name[100];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s %f",&name,&sc);
	if (score>=sc)
    {
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w+");
	    fprintf(f,"%s\n%.2f",player_name,sc);
	    fclose(f);
    }
}
void show_record() //shows the highest score and the name of the player who scored it.
{
    system("cls");
	char name[20];
	float score;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&score);
    printf("\n\n\n\n\n\t\t\t\t\t_____________________________________________________________");
    if(score>0)
        printf("\n\n\t\t\t\t\t %s has secured the Highest Score %0.2f",name,score);
    else
        printf("\n\n\t\t\t\t\t The Game hasn't been played by anyone.");
    printf("\n\n\t\t\t\t\t_____________________________________________________________");
    fclose(f);
    getch();
}

void reset_score() //resets the score to zero and appoints NONE to the name.
{
    system("cls");
    float score;
	char name[20];
	FILE *f;
	f=fopen("score.txt","w+");
	fscanf(f,"%s%f",&name,&score);
	score=0;
	fprintf(f,"NONE %.2f",score);
    fclose(f);
}

void intro() //provides the introduction of the game.
{
    system("cls");
    printf("\n\n\n\n                                      INTRODUCTION");
    printf("\n_________________________________________________________________________________________________________________________");
    printf("\n # There are two rounds in the game, ELIGIBILITY ROUND & CHALLENGE ROUND");
    printf("\n # In eligibility round you will be asked a total of 5 questions to test your general");
    printf("\n   knowledge. You will be eligible to play the game if you can give atleast 3\n   right answers otherwise you aren't eligible to play.");
    printf("\n # Your game starts with the CHALLENGE ROUND. In this round you will be asked\n   total 10 questions. Each right answer will be awarded 1,000 points.");
    printf("\n # You will be given 4 options and you have to press A, B ,C or D for the\n   respective options \n   NOTE: It's mandatory to answer the question shown");
    printf("\n # You will be given 30 seconds for ELIGIBILITY Round and CHALLENGE Round.\n   During the last 5 seconds the clock will start beeping.");
    printf("\n # You will be given 2 LIFE LINES in the CHALLENGE ROUND.\n     1. 50:50 means two options will be eliminated.\n     2. Replace means the current question will be skipped and replaced by an another question.\n     NOTE: Use of LIFE LINES will only credit 500 points for the correct answer.\n           You can use each lifeline only once in the game.");
    printf("\n # You will be asked questions continuously until you give a wrong answer.");
	printf("\n\n_______________________________________BEST OF LUCK_____________________________________________________________________");
}
int fiftyFifty(int n, int countf){ // eliminates any 2 wrong options for a particular question.
    if(countf!=1){
        countf=1;
        switch(n){
            case 1:
                printf("\n\n\n\n\n\t\t\tFilm and TV institute of India is located at\n\n");
                printf("\t\t\t A.Pune \n\t\t\t B.Panji \n\t\t\t C. \n\t\t\t D.\n\n\n");
                break;
            case 2:
                printf("\n\n\n\n\n\t\t\tGuess the monument shown in the photo.\n\n");
                printf("\t\t\t A.Opera House \n\t\t\t B. \n\t\t\t C.Lotus Temple \n\t\t\t D.\n\n\n");
                break;
            case 3:
                printf("\n\n\n\n\n\t\t\tFor which of the following disciplines is Nobel Prize awarded?\n\n");
                printf("\t\t\t A. \n\t\t\t B.Physiology or Medicine \n\t\t\t C. \n\t\t\t D.All of the above\n\n\n");
                break;
            case 4:
                printf("\n\n\n\n\n\t\t\tGuess the Bollywood movie from the video clip\n\n");
                printf("\t\t\t A. \n\t\t\t B.Lukka Chuppi \n\t\t\t C.Pati Patni Aur Woh \n\t\t\t D.\n\n\n");
                break;
            case 5:
                printf("\n\n\n\n\n\t\t\tWhich of the following country has not won a single title of ICC Men's T20 Cricket World Cup?\n\n");
                printf("\t\t\t A. \n\t\t\t B. \n\t\t\t C.England \n\t\t\t D.Australia\n\n\n");
                break;
            case 6:
                printf("\n\n\n\n\n\t\t\tFFC stands for\n\n");
                printf("\t\t\t A.Foreign Finance Corporation \n\t\t\t B.Film Finance Corporation \n\t\t\t C. \n\t\t\t D.\n\n\n");
                break;
            case 7:
                printf("\n\n\n\n\n\t\t\tGuess the singer from the audio clip.\n\n");
                printf("\t\t\t A.Adele \n\t\t\t B. \n\t\t\t C.Taylor Swift \n\t\t\t D.\n\n");
                break;
            case 8:
                printf("\n\n\n\n\n\t\t\tBetween whom did the 'Battle of Hydaspes' took place?\n\n");
                printf("\t\t\t A.Alexander and Porus \n\t\t\t B.Chandragupta Maurya and Seleucus \n\t\t\t C. \n\t\t\t D.\n\n\n");
                break;
            case 9:
                printf("\n\n\n\n\n\t\t\tEntomology is the science that studies\n\n");
                printf("\t\t\t A. \n\t\t\t B.Insects \n\t\t\t C. \n\t\t\t D.Sea plants\n\n\n");
                break;
            case 10:
                printf("\n\n\n\n\n\t\t\tFastest shorthand writer was\n\n");
                printf("\t\t\t A. Dr.G.D. Bist \n\t\t\t B. \n\t\t\t C. \n\t\t\t D. Khudada Khan\n\n\n");
                break;
            case 11:
                printf("\n\n\n\n\n\t\t\tHow many consonants are there in English language?\n\n");
                printf("\t\t\tA.20 \n\t\t\tB. \n\t\t\tC.21 \n\t\t\tD.\n\n\n");
                break;
            case 12:
                printf("\n\n\n\n\n\t\t\tWhich is the largest flower in the world?\n\n\n");
                printf("\t\t\tA.Sunflower \n\t\t\tB.Rafflesia \n\t\t\tC. \n\t\t\tD.\n\n\n");
                break;
            case 13:
                printf("\n\n\n\n\n\t\t\tWhat title is given to the person in the photo?\n\n");
                printf("\t\t\tA.Iron man of India \n\t\t\tB. \n\t\t\tC. \n\t\t\tD.Missile Man of India\n\n\n");
                break;
            case 14:
                printf("\n\n\n\n\n\t\t\tWho invented computer?\n\n");
                printf("\t\t\tA.Dennis Ritchie \n\t\t\tB. \n\t\t\tC.Charles Baggage \n\t\t\tD.\n\n\n");
                break;
            case 15:
                printf("\n\n\n\n\n\t\t\tWhich car company's logo is shown in the image?\n\n");
                printf("\t\t\tA.Jaguar \n\t\t\tB.Rolls Royce \n\t\t\tC. \n\t\t\tD.\n\n\n");
                break;
            case 16:
                printf("\n\n\n\n\n\t\t\tWhat is a male camel called?\n\n");
                printf("\t\t\tA.Stag \n\t\t\tB. \n\t\t\tC.Bull \n\t\t\tD.\n\n\n");
                break;
            case 17:
                printf("\n\n\n\n\n\t\t\tHow many eyes do bee have?\n\n");
                printf("\t\t\tA. \n\t\t\tB.4 \n\t\t\tC.5 \n\t\t\tD.\n\n\n");
                break;
            case 18:
                printf("\n\n\n\n\n\t\t\tSolve the Riddle:\n\t\t\tI'm not alive, yet I grow. I've no lungs, yet I need air. I've no mouth, yet I can drown. Who am I?\n\n");
                printf("\t\t\tA. \n\t\t\tB.Fire \n\t\t\tC. \n\t\t\tD.Soil\n\n\n");
                break;
            case 19:
                printf("\n\n\n\n\n\t\t\tIdentify the logo.\n\n");
                printf("\t\t\tA.Indian Navy \n\t\t\tB. \n\t\t\tC.Indian Port Department \n\t\t\tD.\n\n\n");
                break;
            case 20:
                printf("\n\n\n\n\n\t\t\tSolve the riddle: \n\t\t\tWhat goes around the world but stays in the corner?\n\n");
                printf("\t\t\tA. \n\t\t\tB.A Stamp \n\t\t\tC. \n\t\t\tD.A plane\n\n\n");
                break;
            case 21:
                printf("\n\n\n\n\n\t\t\tWhich of the following islands is the biggest?\n\n");
                printf("\t\t\tA.Iceland \n\t\t\tB. \n\t\t\tC. \n\t\t\tD.Greenland\n\n\n");
                break;
            case 22:
                printf("\n\n\n\n\n\t\t\tWhat are the next two numbers in the sequence? 7,5,8,4,9,3,__,__\n\n");
                printf("\t\t\tA.10,2 \n\t\t\tB. \n\t\t\tC.11,1 \n\t\t\tD.\n\n\n");
                break;
            case 23:
                printf("\n\n\n\n\n\t\t\tIdentify the car logo shown.\n\n");
                printf("\t\t\tA.Manza \n\t\t\tB.Mazda \n\t\t\tC. \n\t\t\tD.\n\n\n");
                break;
            case 24:
                printf("\n\n\n\n\n\t\t\tWater boils at 212 degrees on which scale?\n\n");
                printf("\t\t\tA. \n\t\t\tB.Fahrenheit \n\t\t\tC.Kelvin \n\t\t\tD.\n\n\n");
                break;
            case 25:
                printf("\n\n\n\n\n\t\t\tIdentify the Indian petroleum company.\n\n");
                printf("\t\t\t.A.Bharat Petroleum \n\t\t\tB. \n\t\t\tC.Indian Oil \n\t\t\tD.\n\n\n");
                break;
            case 26:
                printf("\n\n\n\n\n\t\t\tName the ape specie from the video.\n\n");
                printf("\t\t\tA.Langur \n\t\t\tB. \n\t\t\tC. \n\t\t\tD.Lemur\n\n\n");
                break;
            case 27:
                printf("\n\n\n\n\n\t\t\tHow many languages can iPhone's virtual keyboard support?\n\n");
                printf("\t\t\tA. \n\t\t\tB.20 \n\t\t\tC.21 \n\t\t\tD. \n\n\n");
                break;
            case 28:
                printf("\n\n\n\n\n\t\t\tLinkedIn is a social networking site mainly aimed at whom?\n\n");
                printf("\t\t\tA. \n\t\t\tB.Professionals \n\t\t\tC. \n\t\t\tD.Students\n\n\n");
                break;
        }
    }
    return countf;
}
int replace(int countr) //replaces the current question with a new question
{
    if(countr==0){
        printf("\n\n\n\n\n\t\t\tWhich planet is known as the Red Planet?\n\n");
        printf("\t\t\tA.Jupiter \n\t\t\tB.Mars \n\t\t\tC.Mercury\n\t\t\tD.None of these\n\n\n");
    }
    countr=1;
    return countr;
}

int main()
{
    system("color F0"); // changes the background and font color, currently White - Background and Black - Font color
    int n,i,timer,x=0,countf=0,countr=0;
    float total_score=0,counter=0;
    char name[50],control_menu,pw[100];
    srand(time(NULL));
    //menu: //access menu
        system("cls"); // clears the screen
        printf("\n\n\n\n\t\t\t\t\t\t\aKNOWLEDGE BEE\n");
        printf("\t\t\t\t    ______________________________________\n");
        printf("\n\t\t\t\t\t\t   WELCOME \n");
        printf("\t\t\t\t\t\t     TO \n");
        printf("\t\t\t\t\t\t   THE GAME \n");
        printf("\t\t\t\t    ________________________________________\n");
        printf("\t\t\t\t\t      BECOME A MILLIONAIRE!  \n") ;
        printf("\t\t\t\t    ________________________________________\n\n");
        printf("\t\t\t\t  ->Press 'B' to Start the game\n");
        printf("\t\t\t\t  ->Press 'H' to view the Highest Score\n");
        printf("\t\t\t\t  ->Press 'R' to Reset the Score\n");
        printf("\t\t\t\t  ->Press 'I' to view the Introduction and Rules\n");
        printf("\t\t\t\t  ->Press 'E' to Exit the game\n");

        control_menu=toupper(getch());
        if (control_menu=='H')
        {
            show_record();
            return main();
        }
        else if (control_menu=='I')
        {
            intro();
            getch();
            return main();
        }
        else if (control_menu=='R')
        {
            system("cls");
            reset_score();
            return main();
        }
        else if (control_menu=='E')
        {
            exit(1);
        }
        else if(control_menu=='B')
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
            gets(name);
            intro();
            printf("\n\n\n\t\t\tPress 'Y' to start the quiz\n");
            printf("\t\t\tPress 'N' to return to the main menu\n");
            printf("\t\t\tPress any other key to Quit");
            if(toupper(getch())=='Y')
            {
                goto test;
            }
            else if(toupper(getch())=='N')
            {
                return main();
            }
            else
            {
                exit(1);
            }
            test:
                system("cls");
                for(i=0;i<5;i++)
                {
                    n=rand()%20+1;// a random number generator
                    system("cls");
                    switch(n)
                    {
                        case 1: printf("\n\n\n\n\n\t\t\tWhich of the following is not a vegetable?\n\n");
                                printf("\t\t\t A.Tomato \n\t\t\t B.Cauliflower \n\t\t\t C.Cucumber\n\t\t\t D.Okra\n\n\n");
                                for(timer=30;timer>=0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000); //changes the value of timer after 1000 milliseconds
                                    if(x=kbhit()) //if any button is pressed the timer will stop
                                    {
                                        break;
                                    }
                                    if(timer<=5)//during the last 5 seconds of timer a beeping sound will be produced
                                    {
                                        Beep(850,950); // beeps produced between 850 and 950 milliseconds
                                    }
                                }
                                if(toupper(getch())=='A')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                    getch();
                                    counter++;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong Answer. Correct answer is 'Tomato'.");
                                    getch();
                                    break;
                                }
                        case 2:
                                printf("\n\n\n\n\n\t\t\tWhich is the third highest mountain in the world?\n\n");
                                printf("\t\t\t A.Mt.Everest \n\t\t\t B.Mt.Kilimanjaro \n\t\t\t C.Mt.Kanchanjungha \n\t\t\t D.Mt.Makalu\n\n\n");
                                for(timer=30;timer>=0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<=5)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                if(toupper(getch())=='C')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                    getch();
                                    counter++;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong Answer. Correct answer is 'Mt.Kanchanjunga'.");
                                    getch();
                                    break;
                                }
                            case 3:
                                printf("\n\n\n\n\n\t\t\tWhat is the national game of India?\n\n");
                                printf("\t\t\t A.Hockey \n\t\t\t B.Cricket \n\t\t\t C.Kabbadi \n\t\t\t D.Wrestling\n\n\n");
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                if(toupper(getch())=='A')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                    getch();
                                    counter++;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong Answer. Correct answer is 'Hockey'.");
                                    getch();
                                    break;
                                }
                        case 4:
                                printf("\n\n\n\n\n\t\t\tWhich of the following Bollywood movie has the longest show time?\n\n");
                                printf("\t\t\t A.Lagaan \n\t\t\t B.Mera Naam Joker \n\t\t\t C.Sangam \n\t\t\t D.Tamas\n\n\n");
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                if(toupper(getch())=='D')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                    getch();
                                    counter++;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer. Correct answer is 'Tamas'.");
                                    getch();
                                    break;
                                }
                        case 5:
                                printf("\n\n\n\n\n\t\t\tName the city in which this monument is located in.\n\n");
                                system("start test.jpg");
                                getch();
                                printf("\t\t\t A.Agra \n\t\t\t B.Pisa \n\t\t\t C.Rio de Janeiro \n\t\t\t D.Jordan\n\n\n");
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                    getch();
                                    counter++;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Pisa'.");
                                    getch();
                                    break;
                                }
                        case 6:
                            printf("\n\n\n\n\n\t\t\tWhich of the following country is known as 'The Land Of Rising Sun'?\n\n");
                            printf("\t\t\tA.China \n\t\t\tB.USA\n\t\t\tC.Japan\n\t\t\tD.Bangladesh\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Japan'.");
                                getch();
                                break;
                            }
                        case 7:
                            printf("\n\n\n\n\n\t\t\tWho is the inventor of electricity?\n\n");
                            printf("\t\t\tA.Benjamin Franklin \n\t\t\tB. Issac Newton \n\t\t\tC. J.J Thompson \n\t\t\tD. C.V. Raman\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Benjamin Franklin'.");
                                getch();
                                break;
                            }
                        case 8:
                            printf("\n\n\n\n\n\t\t\tWhich of the following countries is the largest democracy of the world?\n\n");
                            printf("\t\t\tA.Russia \n\t\t\tB.Japan \n\t\t\tC.India \n\t\t\tD.USA\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'India'.");
                                getch();
                                break;
                            }
                        case 9:
                            printf("\n\n\n\n\n\t\t\tWhich is the most sensitive organ in the human body?\n\n");
                            printf("\t\t\tA.Ear \n\t\t\tB.Skin \n\t\t\tC.Nose \n\t\t\tD.Tongue\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Skin'.");
                                getch();
                                break;
                            }
                        case 10:
                            printf("\n\n\n\n\n\t\t\tWhat type of tree do dates grow on?\n\n");
                            printf("\t\t\tA.Coconut \n\t\t\tB.Pine \n\t\t\tC.Birch \n\t\t\tD.Palm\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='D'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Palm'.");
                                getch();
                                break;
                            }
                        case 11:
                            printf("\n\n\n\n\n\t\t\tWhat is the 15th alphabet of the English language?\n\n");
                            printf("\t\t\tA. O \n\t\t\tB. M \n\t\t\tC. N \n\t\t\tD. P\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'O'.");
                                getch();
                                break;
                            }
                        case 12:
                            printf("\n\n\n\n\n\t\t\tWho was the first President of India?\n\n");
                            printf("\t\t\tA. APJ Abdul Kalam \n\t\t\tB. Partibha Patel \n\t\t\tC. Rajendra Prasad \n\t\t\tD. Sarvapalli Radhakrishna\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Rajendra Prasad'.");
                                getch();
                                break;
                            }
                        case 13:
                            printf("\n\n\n\n\n\t\t\tWhere does a pig live?\n\n");
                            printf("\t\t\tA.Ranch \n\t\t\tB.Sty \n\t\t\tC.Stable \n\t\t\tD.Shed\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Sty'.");
                                getch();
                                break;
                            }
                        case 14:
                            printf("\n\n\n\n\n\t\t\tWhat colour symbolises peace?\n\n");
                            printf("\t\t\tA.Black \n\t\t\tB.Green \n\t\t\tC.Red \n\t\t\tD.White\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='D'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'White'.");
                                getch();
                                break;
                            }
                        case 15:
                            printf("\n\n\n\n\n\t\t\tWhich is the most spoken language in the world?\n\n");
                            printf("\t\t\tA.Mandarin \n\t\t\tB.Spanish \n\t\t\tC.English \n\t\t\tD.French\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Mandarin'.");
                                getch();
                                break;
                            }
                        case 16:
                            printf("\n\n\n\n\n\t\t\t'Stars and Stripes' is the nickname of which country?\n\n");
                            printf("\t\t\tA.United Kingdom \n\t\t\tB.New Zealand \n\t\t\tC.United States of America \n\t\t\tD.Australia\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'United States of America'.");
                                getch();
                                break;
                            }
                        case 17:
                            printf("\n\n\n\n\n\t\t\tGuess the name of the painting.\n\n");
                            system("start test2.jpg");
                            getch();
                            printf("\t\t\tA.Vitruvian Man \n\t\t\tB.Venus de Milo \n\t\t\tC.Pieta \n\t\t\tD.Mona Lisa\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='D'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Mona Lisa'.");
                                getch();
                                break;
                            }
                        case 18:
                            printf("\n\n\n\n\n\t\t\tWhat is Harry Potter's middle name?\n\n");
                            printf("\t\t\tA.James \n\t\t\tB.Robert \n\t\t\tC.Peter \n\t\t\tD.Alex\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'James'.");
                                getch();
                                break;
                            }
                        case 19:
                            printf("\n\n\n\n\n\t\t\tWhat is a group of crows called?\n\n");
                            printf("\t\t\tA.Raft \n\t\t\tB.Murder \n\t\t\tC.Wake \n\t\t\tD.Battery\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Murder'.");
                                getch();
                                break;
                            }
                        case 20:
                            printf("\n\n\n\n\n\t\t\tIdentify the animal shown in the video.\n\n");
                            system("start test3.mp4");
                            getch();
                            printf("\t\t\tA.Walrus \n\t\t\tB.Seal \n\t\t\tC.Sea lion \n\t\t\tD.Skunks\n\n\n");
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C'){
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong answer.Correct answer is 'Sea Lion'.");
                                getch();
                                break;
                            }
                    }
                }
                if(counter>=3)
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tCongratulations, you are selected.");
                    getch();
                    goto quiz;
                }
                else{
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\t\t\tSorry!! Better Luck next time.");
                    getch();
                    return main();
                }
                quiz:
                    counter=0;
                    for(i=0;i<10;i++)
                    {
                        char ch;
                        system("cls");
                        n=rand()%26+1;
                        switch(n)
                        {
                        case 1:
                            printf("\n\n\n\n\n\t\t\tFilm and TV institute of India is located at\n\n");
                            printf("\t\t\t A.Pune \n\t\t\t B.Panji \n\t\t\t C.Rajkot \n\t\t\t D.Chennai\n\n\n");
                            if(countf==0)
                                printf("\t\t\tF for 50:50\n");
                            if(countr==0){
                                printf("\t\t\tR for replace");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf("\t\t\t\t\t \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                getch();
                                if(toupper(getch())=='A')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Pune'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Pune'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 2:
                            printf("\n\n\n\n\n\t\t\tGuess the monument shown in the photo.\n\n");
                            system("start quiz1.jpeg");
                            getch();
                            printf("\t\t\t A.Opera House \n\t\t\t B.Badshahi Mahal \n\t\t\t C.Lotus Temple \n\t\t\t D.Charminar\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='C')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else{
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Lotus Temple'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else{
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Lotus Temple'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 3:
                            printf("\n\n\n\n\n\t\t\tFor which of the following disciplines is Nobel Prize awarded?\n\n");
                            printf("\t\t\t A.Physics and Chemistry \n\t\t\t B.Physiology or Medicine \n\t\t\t C.Literature, Peace and Economics \n\t\t\t D.All of the above\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='D')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='D')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong answer. Correct answer is D.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong answer. Correct answer is D.");
                                getch();
                                goto score;
                                break;
                            }
                        case 4:
                            printf("\n\n\n\n\n\t\t\tGuess the Bollywood movie from the video clip\n\n");
                            system("start quiz2.mp4");
                            getch();
                            printf("\t\t\t A.Sonu Ke Titu Ki Sweety \n\t\t\t B.Lukka Chuppi \n\t\t\t C.Pati Patni Aur Woh \n\t\t\t D.Pyaar Ka Punchnama\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='C')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is C.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is C.");
                                getch();
                                goto score;
                                break;
                            }
                        case 5:
                            printf("\n\n\n\n\n\t\t\tWhich of the following country has not won a single title of ICC Men's T20 Cricket World Cup?\n\n");
                            printf("\t\t\t A.India \n\t\t\t B.Sri Lanka \n\t\t\t C.England \n\t\t\t D.Australia\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='D')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='D')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Australia'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Australia'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 6:
                            printf("\n\n\n\n\n\t\t\tFFC stands for\n\n\n");
                            printf("\t\t\t A.Foreign Finance Corporation \n\t\t\t B.Film Finance Corporation \n\t\t\t C.Federation of Football Council \n\t\t\t D.None of the above\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong answer. Correct answer is B");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong answer. Correct answer is B");
                                getch();
                                goto score;
                                break;
                            }
                        case 7:
                            printf("\n\n\n\n\n\t\t\tGuess the singer from the audio clip.\n\n");
                            system("start quiz3.mp3");
                            getch();
                            printf("\t\t\t A.Adele \n\t\t\t B.Selena Gomez \n\t\t\t C.Taylor Swift \n\t\t\t D.Ariana Grande\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='A')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else{
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Adele'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else{
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Adele'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 8:
                            printf("\n\n\n\n\n\t\t\tBetween whom did the 'Battle of Hydaspes' took place?\n\n");
                            printf("\t\t\t A.Alexander and Porus \n\t\t\t B.Chandragupta Maurya and Seleucus \n\t\t\t C.French East India Co. and British East India Co. \n\t\t\t D.None of the above\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='A')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is A.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is A.");
                                getch();
                                goto score;
                                break;
                            }
                        case 9:
                            printf("\n\n\n\n\n\t\t\tEntomology is the science that studies\n\n");
                            printf("\t\t\t A.Behavior of Human Beings \n\t\t\t B.Insects \n\t\t\t C. The formation of rocks \n\t\t\t D. Sea plants\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong answer. Correct answer is 'Insects'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong answer. Correct answer is 'Insects'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 10:
                            printf("\n\n\n\n\n\t\t\tFastest shorthand writer was\n\n");
                            printf("\t\t\t A. Dr.G.D. Bist \n\t\t\t B. J.R.D. Tata \n\t\t\t C. J.M. Tagore \n\t\t\t D. Khudada Khan\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='A')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Dr.G.D. Bisht'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Dr.G.D. Bisht'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 11:
                            printf("\n\n\n\n\n\t\t\tHow many consonants are there in English language?\n\n");
                            printf("\t\t\tA.20 \n\t\t\tB.5 \n\t\t\tC.21 \n\t\t\tD.7\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='C')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is '21'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is '21'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 12:
                            printf("\n\n\n\n\n\t\t\tWhich is the largest flower in the world?\n\n\n");
                            printf("\t\t\tA.Sunflower \n\t\t\tB.Rafflesia \n\t\t\tC.Marigold \n\t\t\tD.Lotus\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Rafflesia'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Rafflesia'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 13:
                            printf("\n\n\n\n\n\t\t\tWhat title is given to the person in the photo?\n\n");
                            system("start quiz4.jfif");
                            getch();
                            printf("\t\t\tA.Iron man of India \n\t\t\tB.Father of India \n\t\t\tC.Nightingale of India \n\t\t\tD.Missile Man of India\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='D')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='D')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Missile Man of India'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Missile Man of India'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 14:
                            printf("\n\n\n\n\n\t\t\tWho invented computer?\n\n");
                            printf("\t\t\tA.Dennis Ritchie \n\t\t\tB.Guido van Rossum \n\t\t\tC.Charles Baggage \n\t\t\tD.James Gosling\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='C')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Charles Baggage'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Charles Baggage'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 15:
                            printf("\n\n\n\n\n\t\t\tWhich car company's logo is shown in the image?\n\n");
                            system("start quiz5.jpg");
                            getch();
                            printf("\t\t\tA.Jaguar \n\t\t\tB.Rolls Royce \n\t\t\tC.Range Rover \n\t\t\tD.Maserati\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='A')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Jaguar'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Jaguar'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 16:
                            printf("\n\n\n\n\n\t\t\tWhat is a male camel called?\n\n");
                            printf("\t\t\tA.Stag \n\t\t\tB.Buck \n\t\t\tC.Bull \n\t\t\tD.Stallion\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='C')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Bull'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Bull'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 17:
                            printf("\n\n\n\n\n\t\t\tHow many eyes do bee have?\n\n");
                            printf("\t\t\tA.2 \n\t\t\tB.4 \n\t\t\tC.5 \n\t\t\tD.8\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='C')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is '5'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is '5'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 18:
                            printf("\n\n\n\n\n\t\t\tSolve the Riddle:\n\t\t\tI'm not alive, yet I grow. I've no lungs, yet I need air. I've no mouth, yet I can drown. Who am I?\n\n");
                            printf("\t\t\tA.Air \n\t\t\tB.Fire \n\t\t\tC.Water \n\t\t\tD.Soil\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Fire'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Fire'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 19:
                            printf("\n\n\n\n\n\t\t\tIdentify the logo.\n\n");
                            system("start quiz6.jpg");
                            getch();
                            printf("\t\t\tA.Indian Navy \n\t\t\tB.Indian Marines \n\t\t\tC.Indian Port Department \n\t\t\tD.Indian Army\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='A')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Indian Navy'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Indian Navy'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 20:
                            printf("\n\n\n\n\n\t\t\tSolve the riddle: \n\t\t\tWhat goes around the world but stays in the corner?\n\n");
                            printf("\t\t\tA.An Introvert \n\t\t\tB.A Stamp \n\t\t\tC.A Butterfly \n\t\t\tD.A plane\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'A Stamp'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'A Stamp'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 21:
                            printf("\n\n\n\n\n\t\t\tWhich of the following islands is the biggest?\n\n");
                            printf("\t\t\tA.Iceland \n\t\t\tB.Borneo \n\t\t\tC.Madagascar \n\t\t\tD.Greenland\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='D')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='D')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Greenland'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Greenland'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 22:
                            printf("\n\n\n\n\n\t\t\tWhat are the next two numbers in the sequence? 7,5,8,4,9,3,__,__\n\n");
                            printf("\t\t\tA.10,2 \n\t\t\tB.10,10 \n\t\t\tC.11,1 \n\t\t\tD.8,4\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='A')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='A')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is '10,2'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is '10,2'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 23:
                            printf("\n\n\n\n\n\t\t\tIdentify the car logo shown.\n\n");
                            system("start quiz7.jpg");
                            getch();
                            printf("\t\t\tA.Manza \n\t\t\tB.Mazda \n\t\t\tC.Mood \n\t\t\tD.Silver Eagle\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mazda'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mazda'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 24:
                            printf("\n\n\n\n\n\t\t\tWater boils at 212 degrees on which scale?\n\n");
                            printf("\t\t\tA.Celsius \n\t\t\tB.Fahrenheit \n\t\t\tC.Kelvin \n\t\t\tD.Rankine\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Fahrenheit'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Fahrenheit'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 25:
                            printf("\n\n\n\n\n\t\t\tIdentify the Indian petroleum company.\n\n");
                            printf("\t\t\t.A.Bharat Petroleum \n\t\t\tB.Hind Petroleum \n\t\t\tC.Indian Oil \n\t\t\tD.Reliance Petroleum Ltd.\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='C')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Indian Oil'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Indian Oil'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 26:
                            printf("\n\n\n\n\n\t\t\tName the ape specie from the video.\n\n");
                            system("start quiz9.mp4");
                            getch();
                            printf("\t\t\tA.Langur \n\t\t\tB.Orangutan \n\t\t\tC.Chimpanzee \n\t\t\tD.Lemur\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='D')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='D')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Lemur'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Lemur'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 27:
                            printf("\n\n\n\n\n\t\t\tHow many languages can iPhone's virtual keyboard support?\n\n");
                            printf("\t\t\tA.19 \n\t\t\tB.20 \n\t\t\tC.21 \n\t\t\tD.22 \n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='C')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='C')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is '21'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is '21'.");
                                getch();
                                goto score;
                                break;
                            }
                        case 28:
                            printf("\n\n\n\n\n\t\t\tLinkedIn is a social networking site mainly aimed at whom?\n\n");
                            printf("\t\t\tA.Children \n\t\t\tB.Professionals \n\t\t\tC.Seniors \n\t\t\tD.Students\n\n\n");
                            if(countf==0){
                                printf("\t\t\tF for 50:50\n");
                            }
                            if(countr==0){
                                printf("\t\t\tR for Replace\n\n\n");
                            }
                            for(timer=30;timer>0;timer--)
                            {
                                printf(" \rTime left: %02d",timer);
                                Sleep(1000);
                                if(x=kbhit())
                                {
                                    break;
                                }
                                if(timer<6)
                                {
                                    Beep(850,950);
                                }
                            }
                            if(toupper(getch())=='B')
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                getch();
                                counter++;
                                break;
                            }
                            else if(toupper(getch())=='F'){
                                system("cls");
                                fiftyFifty(n,countf);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countf=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Professionals'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else if(toupper(getch())=='R'){
                                system("cls");
                                replace(countr);
                                for(timer=30;timer>0;timer--)
                                {
                                    printf(" \rTime left: %02d",timer);
                                    Sleep(1000);
                                    if(x=kbhit())
                                    {
                                        break;
                                    }
                                    if(timer<6)
                                    {
                                        Beep(850,950);
                                    }
                                }
                                countr=1;
                                if(toupper(getch())=='B')
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tCorrect.");
                                    getch();
                                    counter+=0.5;
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Mars'.");
                                    getch();
                                    goto score;
                                    break;
                                }
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\n\n\n\n\n\t\t\tWrong Answer. Correct answer is 'Professionals'.");
                                getch();
                                goto score;
                                break;
                            }
                        }
                    }
                    score:
                        system("cls");
                        total_score=counter*1000;
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tYou scored %.2f points",total_score);
                        getch();
                        edit_score(total_score,name);
                        show_record();
                        return main();
        }
}
