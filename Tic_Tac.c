#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void Instruction();
int Sign_Choice(char[]);
void Example(char[], char[]);
int Check_Point(char[], int[]);
void Start_Game(char[], char[]);

int main()
{
    system("COLOR 0B");
    printf("Welcom to my Tic-Tac Game:\n\n");
    printf("Press any key to start . . ");
    getch();
    printf(".\n\n");
    system("COLOR 0A");

    printf("Game Instructions:\n\n\t");
    printf("%c It is a dual player game (Just 2 players needed).\n\t", 4);
    printf("%c There are 9 position in this game: (See below)\n\n\t", 4);
    Instruction();

    printf("%c You have to just choose the sign 'X' or 'O' and any one position from 1-9\n\t", 4);
    printf("Press any key to proceed (if you understand) . . ");
    getch();
    printf(".\n\n");
    system("COLOR 0F");
    printf("Game is started.....\n");

    char player_1[30], player_2[30];

    printf("\nEnter the name of Player No. 1: ");
    gets(player_1);
    printf("Enter the name of Player No. 2: ");
    gets(player_2);
    system("COLOR 0C");

    printf("\nChoose a sign to play:-\n\n");
    int set = Sign_Choice(player_1);
    if (set == 1)
    {
        printf("\nSince %s (Player No. 1) choose 'X' therefore, %s (Player No. 2) you have to play with 'O'.", player_1, player_2);
    }
    else
    {
        printf("\nSince %s (Player No. 1) choose 'O' therefore, %s (Player No. 2) you have to play with 'X'.", player_1, player_2);
    }
    printf("\n\nPress any key to continue . . ");
    getch();
    printf(".\n\n");
    system("COLOR 0F");

    char exmpl[] = "000000000";
    char cross[] = "         ";
    char tutor[] = "123456789";

    system("COLOR 0E");
    Example(exmpl, tutor);

    int lp = 1, ch_1, ch_2, draw = 1, flag = 0, result = 0;
    int check[] = {1, 1, 1, 1, 1, 1, 1, 1};

    while (108)
    {
        if (flag)
        {
            goto lable;
        }
        if (lp != 1)
        {
            goto loop;
        }
        printf("%s (Player No. 1) it's your turn.\nEnter the position you want: ", player_1);
        scanf("%d", &ch_1);
        if (tutor[ch_1 - 1] == ' ')
        {
            printf("\n\aPlease choose another position (Place occupied!!!).\n\n");
            continue;
        }
        if (set == 1 && (ch_1 >= 1 && ch_1 <= 9))
        {
            cross[ch_1 - 1] = 'X';
            tutor[ch_1 - 1] = ' ';
            Start_Game(cross, tutor);
            result = Check_Point(cross, check);
            if (result == 1)
            {
                system("COLOR 0A");
                printf("\n\a\a\aGame over!!!\n\n");
                printf("Congratulation!!! %s (Player No. 1) you are the winner.\n", player_1);
                printf("Sorry, %s (Player No. 2) you are the looser!!!\n", player_2);
                break;
            }
            set--;
            draw++;
        }
        else if (set == 0 && (ch_1 >= 1 && ch_1 <= 9))
        {
            cross[ch_1 - 1] = 'O';
            tutor[ch_1 - 1] = ' ';
            Start_Game(cross, tutor);
            result = Check_Point(cross, check);
            if (result == -1)
            {
                system("COLOR 0A");
                printf("\n\a\aGame over!!!\n\n");
                printf("Congratulation!!! %s (Player No. 1) you are the winner.\n", player_1);
                printf("Sorry, %s (Player No. 2) you are the looser!!!\n", player_2);
                break;
            }
            set++;
            draw++;
        }
        else
        {
            printf("\n\aPlease choose the position between 1 to 9\n\n");
            continue;
        }
    loop:
    lable:
        if (draw == 10)
        {
            system("COLOR 0D");
            printf("\n\aThe Game is drawn!!!\n");
            printf("\nThanks for playing %c %c %c\n", 2, 1, 2);
            printf("Press any key to exit . . ");
            getch();
            printf(".\t");
            exit(1080);
        }
        printf("%s (Player No. 2) it's your turn.\nEnter the position you want: ", player_2);
        scanf("%d", &ch_2);
        if (tutor[ch_2 - 1] == ' ')
        {
            lp--;
            printf("\n\aPlease choose another position (Place occupied!!!).\n\n");
            continue;
        }
        if (set == 1 && (ch_2 >= 1 && ch_2 <= 9))
        {
            cross[ch_2 - 1] = 'X';
            tutor[ch_2 - 1] = ' ';
            Start_Game(cross, tutor);
            result = Check_Point(cross, check);
            if (result == 1)
            {
                system("COLOR 0A");
                printf("\n\a\aGame over!!!\n\n");
                printf("Congratulation!!! %s (Player No. 2) you are the winner.\n", player_2);
                printf("Sorry, %s (Player No. 1) you are the looser!!!\n", player_1);
                break;
            }
            set--;
            draw++;
            lp = 1;
            flag = 0;
        }
        else if (set == 0 && (ch_2 >= 1 && ch_2 <= 9))
        {
            cross[ch_2 - 1] = 'O';
            tutor[ch_2 - 1] = ' ';
            Start_Game(cross, tutor);
            result = Check_Point(cross, check);
            if (result == -1)
            {
                system("COLOR 0A");
                printf("\n\a\aGame over!!!\n\n");
                printf("Congratulation!!! %s (Player No. 2) you are the winner.\n", player_2);
                printf("Sorry, %s (Player No. 1) you are the looser!!!\n", player_1);
                break;
            }
            set++;
            draw++;
            lp = 1;
            flag = 0;
        }
        else
        {
            printf("\n\aPlease choose the position between 1 to 9\n\n");
            flag++;
            continue;
        }
    }

    printf("\nThanks for playing %c %c %c\n", 2, 1, 2);
    printf("Press any key to exit . . ");
    getch();
    printf(".\t");
    system("COLOR 0F");
    return 1080;
}

void Instruction()
{
    int i, j, inst = 0;
    char tutor[] = "123456789";

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c    ", tutor[inst]);
            inst++;
        }
        printf("\n\n\t");
    }
}

int Sign_Choice(char name[])
{
    char choice;

    while (108)
    {
        printf("%s (Player No. 1) what you want to choose 'X' or 'O' : ", name);
        fflush(stdin);
        scanf("%c", &choice);

        switch (choice)
        {
        case 'X':
        case 'x':
            printf("\n%s (Player No. 1) You choose 'X' to play the game.", name);
            return 1;

        case 'O':
        case 'o':
            printf("\n%s (Player No. 1) You choose 'O' to play the game.", name);
            return 0;

        default:
            printf("\aWrong Choice!\n");
            break;
        }
    }
}

void Start_Game(char cross[], char tutor[])
{
    int i, j, real = 0, imgn = 0;

    printf("\n\t");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c    ", cross[real]);
            real++;
        }
        printf("\t\t");
        for (j = 0; j < 3; j++)
        {
            printf("%c    ", tutor[imgn]);
            imgn++;
        }
        if (i == 2)
        {
            printf("\n\n");
        }
        else
        {
            printf("\n\n\t");
        }
    }
}

void Example(char cross[], char tutor[])
{
    int i, j, real = 0, imgn = 0;

    printf("\t");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c    ", cross[real]);
            real++;
        }
        if (i == 1)
        {
            printf("\b\b-------->  ");
        }
        else
        {
            printf("\t\t");
        }
        for (j = 0; j < 3; j++)
        {
            printf("%c    ", tutor[imgn]);
            imgn++;
        }
        if (i == 2)
        {
            printf("\n\n");
        }
        else
        {
            printf("\n\n\t");
        }
    }

    printf("Left side (accept sign - X/O) --------> Right side (show current position)\n\n");
    printf("Left side: It is your playing board format.\n");
    printf("Right side: It is your helping board format.\n\n");
    printf("Press any key to start the game . . ");
    getch();
    printf(".\n\n");
    system("COLOR 0F");
}

int Check_Point(char cross[], int check[])
{
    int i;

    check[0] = cross[0] + cross[1] + cross[2];
    check[1] = cross[3] + cross[4] + cross[5];
    check[2] = cross[6] + cross[7] + cross[8];
    check[3] = cross[0] + cross[3] + cross[6];
    check[4] = cross[1] + cross[4] + cross[7];
    check[5] = cross[2] + cross[5] + cross[8];
    check[6] = cross[0] + cross[4] + cross[8];
    check[7] = cross[2] + cross[4] + cross[6];

    for (i = 0; i < 8; i++)
    {
        if (check[i] == 264)
        {
            return 1;
        }
        else if (check[i] == 237)
        {
            return -1;
        }
    }
    return 0;
}
