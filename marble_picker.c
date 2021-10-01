//FUN GAME
#include<stdio.h>
#include<conio.h>
void rules() ;
void game() ;
int random(int pile_size)
{
    return ((rand()%(pile_size/2))+1);
}
int main()
{
    int choice;
    srand(time(0));
    system("CLS");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t\t\tMARBLE PICKER\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\tWELCOME!\n\n");
    printf("\t\t  <1> RULES\n\t\t  <2> PLAY\n\t\t  <3> EXIT\n\n");
    printf("\t\t  ENTER YOUR CHOICE :");
    scanf("\t\t%d",&choice);

    switch(choice)
    {
        case 1:rules();break;
        case 2:game();break;
        case 3:exit(0);break;
        default:printf("WRONG INPUT");

    }
    return 0;
}
void rules()
{
    system("CLS");
    printf("\t\tHELLO!!\n\t\tIAM BOT-004\n\t\tIT'S TIME TO TEST YOUR ABILITY \n");
    printf("\t\tLET'S PLAY A FUN GAME \n\t\tI WILL LET YOU KNOW ABOUT THIS\n\t\tARE YOU READY! ") ;
    getch() ;
    system("CLS");
    printf ("\t RULES AND REGULATIONS :\n\n") ;
    printf ("\t\tTWO PLAYERS SHOULD PICK THE MARBLES ALTERNATIVELY FROM THE PILE UNTILL THE END.") ;
    printf (" ONE SHOULD ATLEAST PICK ONE BUT ATMOST HALF OF THE ENTIRE MARBLES.THE LAST PICKER WILL BE THE LOSER AND I WILL BE YOUR OPPONENT ") ;
    getch();
    main();

}
void game ()
{
    int pile_size=10,in=1, i=0, human_choice,input,bot_choice=50;
    int poss[]={3,7,15,31,63},j=1;
    int difficulty;
    system("CLS");
    printf("\t\tLET'S GET STARTED\n\n") ;
    printf("\t\tTHERE ARE 10 LEVELS IN THIS GAME \n\n") ;
    printf ("\t\tHOW SHOULD I PLAY SMART OR STUPID PRESS 1 OR 0: ") ;
    scanf("\t\t%d", &difficulty) ;
    while(in)
    {
        system("CLS");
        if (j==11)
            break;
        printf ("\t\t-----------------------------------------------\n\n");
        printf("\t\t\t\tLEVEL %d\n\n",j);
        printf("\t\t------------------------------------------------\n\n");
        printf ("\t\tNOW THE SIZE OF THE PILE => %d MARBLES \n\n", pile_size) ;
        printf("\t\tIF YOU WANT TO PICK FIRST PRESS 1 ELSE PRESS 0: ");
        scanf("\t\t%d", &input) ;
        system("CLS");
        while(pile_size>=0)
        {
            if(pile_size==0)
            {
                printf ("\n\t\tCONGRATULATIONS YOU WON THE GAME!!!!...\n") ;
                break;
            }

            if (input)
            {
                printf("\t\tENTER THE NO OF MARBLES THAT YOU WOULD LIKE TO PICK: ");
                scanf("\t\t%d", &human_choice) ;

                if(!(human_choice>=1&&human_choice<=pile_size/2)&&pile_size!=1)
                {
                    printf("\n\t\tWRONG INPUT\n\t\t..!!!!!GAME OVER!!!!!..");
                    getch();
                    main();
                }
                system("CLS");
                pile_size=pile_size-human_choice;
                if (pile_size>0)
                    printf ("\t\tWOW NICE MOVE\n\n");
                printf("\t\tYOU TOOK %d MARBLES\n\n",human_choice);
                printf ("\t\tNO OF MARBLES LEFT = %d MARBLES\n\n",pile_size) ;
                if(pile_size==0)
                {
                    system("CLS");
                    printf ("\n\n\n\n\t\t..!!!!!GAME OVER BETTER, LUCK NEXT TIME !!!!!.. ") ;
                    getch();
                    main();
                }

             }
             if(difficulty==1)
             {
                 if((pile_size==1)||(pile_size==2)||(pile_size==3)||(pile_size==4))
                     bot_choice=1;
                 else if ((pile_size==7)||(pile_size==15)||(pile_size==31)||(pile_size==63))
                     bot_choice=random(pile_size);
                 else
                 {
                     if(pile_size>63)
                        bot_choice=pile_size-63;
                     else if(pile_size>31)
                        bot_choice=pile_size-31;
                     else if(pile_size>15)
                        bot_choice=pile_size-15;
                     else if(pile_size>7)
                        bot_choice=pile_size-7;
                     else
                        bot_choice=pile_size-3;
                 }

             }
             else
             {
                 if(pile_size==1||pile_size==2||pile_size==3)
                     bot_choice=1;
                  else
                     bot_choice=random(pile_size);
             }
             printf("\t\tI WILL PICK %d MARBLES\n\n",bot_choice) ;
             pile_size=pile_size-bot_choice ;
             printf ("\t\tNO OF MARBLES LEFT = %d MARBLES\n\n\n", pile_size) ;
             input=1;
        }

        j++;
        pile_size=j*10;
        printf("\t\tDO YOU WANT TO CONTINUE TO NEXT LEVEL ? TYPE 1 ELSE TYPE 0: ") ;
        scanf("\t\t%d", &in) ;
    }

    printf("\t\tTHANK YOU FOR PARTICIPATING\n\n\t\tHAVE A NICE DAY!!!!...  ") ;
    getch();
    main();

}





