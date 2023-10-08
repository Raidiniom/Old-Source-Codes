#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

bool pincheck (int a);
void calcTime(char *str);


struct userInfo
{
    char firstName[20];
    char lastName[30];
    char userPassword[50];
    char userAccountNumber[20];
    char time[256];
    int userBalance;
    int userPIN;
    int userWithdrawal;
    int userDeposit;
    int userTransfer;
};

int main()
{
    struct userInfo user[100];
    int firstChoice;
    int pin;
    int enterPIN;
    int count = 1;
    FILE *fp;
    char filename[50];
    char checkAccountNumber[20];
    int checkPIN;
    char checkPassword[50];
    char checkLastName[30];
    bool repeat;
    int loginChoice;
    int goBack;
    int depositedAmt;
    int withdrawnAmt;
    int transferAmt;
    int transferAcc;
    char transferFirstName[20];
    char transferLastName[20];
    int total = 0;
    int counting;
    int start;
    int choice2;

    do{
    printf("=====================================================================\n");
    printf("               WELCOME TO OUR ONLINE BANKING SYSTEM\n");
    printf("=====================================================================\n");
    printf("\n\nWhat would you like to do?\n[1] Register\n[2] Log into an account\n[3] Exit\nPlease enter your choice: ");
    scanf("%d", &firstChoice);

    //REGISTERING AN ACCOUNT
    if (firstChoice == 1)
    {
        repeat = true;
        do{
            system("cls");
            printf("Let us register an account.\nProvide your first name: ");
            scanf("%s", user->firstName);
            printf("Last name: ");
            scanf("%s", user->lastName);
            printf("Password: ");
            scanf("%s", user->userPassword);
            printf("Account Number: ");
            scanf("%s", user->userAccountNumber);

            repeat = true;
            while(repeat)
            {
                printf("PIN: ");
                scanf("%d", &user->userPIN);
                pin = user->userPIN;
                count = 0;
                while (pin != 0)
                {
                    pin /= 10;
                    count++;
                }

                if(count >4 || count < 4)
                {
                  printf("Only 4 digits. Try again.\n");
                  repeat = true;
                }
                else if(count == 4)
                {
                    repeat = false;
                }
            }

            user->userBalance = 0;
            strcpy(filename, user->lastName);
            fp = fopen(strcat(filename, ".dat"),"w");
            fwrite(&user, sizeof(struct userInfo),1,fp);
            if(fwrite != 0)
            {
                printf("Congratulations! Your account has been succesfully made.\n");
                repeat = false;
            }
            else
            {
                printf("There was something wrong, please try again.");
                repeat = true;
            }
            fclose(fp);
        }while(repeat);
        repeat = true;
        system("cls");
    }

    //LOGGING IN
    else if (firstChoice == 2)
    {
        memset(user, 0, sizeof(user));
        repeat = true;
        do {
            system("cls");
            printf("Please input your login credentials:\n");
            printf("Last name: ");
            scanf("%s", &checkLastName);
            printf("Account number: ");
            scanf("%s", &checkAccountNumber);
            printf("Password: ");
            scanf("%s", &checkPassword);
            strcpy(filename, checkLastName);
            fp = fopen(strcat(filename, ".dat"),"r");
            fread(&user,sizeof(struct userInfo),1, fp);
            fclose(fp);
            count;
            if(!strcmp(checkAccountNumber, user->userAccountNumber) &&!strcmp(checkLastName, user->lastName))
            {
                if(!strcasecmp(checkPassword, user->userPassword))
                {
                    printf("Succesfully logged in!");
                    system("cls");
                    repeat = false;

                    //CHOOSING ACTION
                    do
                    {
                        printf("================================================================\n");
                        printf("Welcome %s %s!\n", user->firstName, user->lastName);
                        printf("================================================================\n\n\n");
                        printf("Account number: %s\n", user->userAccountNumber);
                        printf("Total Amount: $ %d\n\n", total);
                        printf("================================================================\n");
                        printf("[1] Withdraw amount\n[2] Deposit amount\n[3] View Transaction Logs\n[4] Transfer Funds\n[5] Log Out\nPlease choose option: ");
                        scanf("%d", &loginChoice);


                        switch (loginChoice)
                        {
                            //WITHDRAWING
                            case 1:
                            system("cls");
                            pincheck(user->userPIN);
                            system("cls");
                            printf("Please enter the amount you would like to withdraw: ");
                            scanf("%d", &withdrawnAmt);

                            if (withdrawnAmt <= total)
                            {
                                if (withdrawnAmt > 10000)
                                {
                                    printf("\n\n================================================================\n");
                                    printf("You are only allowed to withdraw up to $ 10,000 each transaction\n");
                                    printf("================================================================\n");
                                    sleep(3);
                                    repeat = true;
                                }
                                else
                                {
                                    printf("\n\n================================================================\n");
                                    printf("You have successfuly withdrawn $ %d from your account.\n", withdrawnAmt);
                                    printf("================================================================\n");
                                    user[counting].userWithdrawal = withdrawnAmt;
                                    total -= withdrawnAmt;
                                    user[counting].userBalance = total;
                                    calcTime(user[counting].time);
                                    counting++;
                                    sleep(1);
                                    printf("\nPress any key to return: ");
                                    getch();
                                    repeat = true;
                                }
                            }
                            else if (withdrawnAmt > total)
                            {
                                printf("================================================================\n");
                                printf("Sorry, you dont have enough  balance to withdraw.\n");
                                printf("================================================================\n");
                                sleep(3);
                                repeat = true;
                            }
                            system("cls");
                            break;

                            //DEPOSITING
                            case 2:
                            system("cls");
                            pincheck(user->userPIN);
                            system("cls");
                            printf("Please enter the amount you would like to deposit: ");
                            scanf("%d", &depositedAmt);

                            if(depositedAmt > 100000)
                            {
                                printf("\n\n================================================================\n");
                                printf("You are only allowed to deposit up to $ 100,000 each transaction\n");
                                printf("================================================================\n");
                                sleep(3);
                                repeat = true;
                            }
                            else
                            {
                                user[counting].userDeposit = depositedAmt;
                                total += depositedAmt;
                                user[counting].userBalance = total;
                                printf("\n\n================================================================\n");
                                printf("You have succesfully deposited $ %d\n", depositedAmt);
                                printf("================================================================\n");
                                calcTime(user[counting].time);
                                count++;
                                counting++;
                                sleep(1);
                                printf("\nPress any key to return: ");
                                getch();
                                system("cls");
                                repeat = true;
                            }
                            system("cls");
                            break;

                            //VIEWING TRANSACTION LOG
                            case 3:
                            system("cls");
                            pincheck(user->userPIN);
                            system("cls");
                            printf("========================================================================================\n");
                            printf("Transaction Time\t\tDeposit\t\t Withdraw\tTransfer\tBalance\n");
                            printf("----------------------------------------------------------------------------------------\n");
                                for (start = 0; start < counting; start++)
                                {
                                        printf("%s\t$%d\t\t$%d\t\t$%d\t\t$%d\n", user[start].time,
                                                user[start].userDeposit, user[start].userWithdrawal, user[start].userTransfer, user[start].userBalance);
                                }
                            printf("========================================================================================\n");
                            sleep(2);
                            printf("\nPress any key to return: ");
                            getch();
                            repeat = true;
                            system("cls");
                            break;

                            //transfer.mp4
                            case 4:

                                system("cls");
                                pincheck(user->userPIN);
                                system("cls");
                                transfer:
                                printf("Please enter the receiver's first name: ");
                                scanf("%s", &transferFirstName);
                                printf("Please enter the receiver's last name: ");
                                scanf("%s", &transferLastName);
                                printf("Please enter the receiver's account number: ");
                                scanf("%d", &transferAcc);
                                printf("Please enter the amount you would like to transfer: ");
                                scanf("%d", &transferAmt);
                                system("cls");
                                printf("The receiver's info: %s %s,",transferFirstName,transferLastName);
                                printf("\nReceiver's account number: %d",transferAcc);
                                printf("\nAmount to be transfered: $%d" ,transferAmt);
                                printf("\n\nThe transaction details are as follows.\nAre all of the information correct?:\n[1]Yes\n[2]No\n");
                                scanf("%d", &choice2);
                                system("cls");
                                if (choice2 == 1)
                                {
                                    if (transferAmt <= user->userBalance)
                                    {
                                        if (transferAmt > 10000)
                                        {
                                            printf("\n\n================================================================\n");
                                            printf("You are only allowed to transfer up to $ 10,000 each transaction\n");
                                            printf("================================================================\n");
                                            sleep(3);
                                            repeat = true;
                                        }
                                        else
                                        {
                                            printf("\n\n===========================================================================\n");
                                            printf("You have successfuly transfered $ %d to %s %s from your account.\n", transferAmt, transferFirstName, transferLastName);
                                            printf("===========================================================================\n");

                                            user[counting].userTransfer = transferAmt;
                                            total -= transferAmt;
                                            user[counting].userBalance = total;
                                            calcTime(user[counting].time);
                                            counting++;
                                            sleep(1);
                                            printf("\nPress any key to return: ");
                                            getch();
                                            system("cls");
                                            repeat = true;
                                        }
                                    }
                                    else if (transferAmt > user->userBalance)
                                    {
                                        printf("================================================================\n");
                                        printf("Sorry, you dont have enough  balance to transfer.\n");
                                        printf("================================================================\n");
                                        sleep(3);
                                        system("cls");
                                        repeat = true;
                                    }
                                }
                               else if (choice2 == 2)
                               {
                                    printf("\nPlease try again!");
                                    sleep(2);
                                    system("cls");
                                    goto transfer;
                               }
                                break;

                            //EXIT
                            case 5:
                            system("cls");
                            printf("GOODBYE! Logging out");
                            usleep(700000);
                            printf(".");
                            usleep(700000);
                            printf(".");
                            usleep(700000);
                            printf(".");
                            system("cls");
                            main();
                            break;


                        }
                    }while(repeat);
                }
                else
                {
                    if (count == 3)
                    {
                        printf("You have exceeded the number of available tries.\nThank you and have a wonderful day!\n");
                        usleep(700000);
                        exit(0);
                    }
                    else
                        printf("\n\nInvalid Account Number or Password. Try again.\n");
                        usleep(700000);
                        count++;
                        repeat = true;
                }
            }
            else
            {
                if (count == 3)
                {
                    printf("\nYou have exceeded the number of available tries.\nThank you and have a wonderful day!\n");
                    usleep(700000);
                    exit(0);
                }
                else
                    printf("\n\nInvalid Account Number or Password. Try again.\n");
                    usleep(700000);
                    count++;
                    repeat = true;
            }
        }while(repeat);
    }
    else if (firstChoice == 3)
    {
        system("cls");
        printf("================================================================\n");
        printf("THANK YOU AND HAVE A WONDERFUL DAY!\n");
        printf("================================================================\n");
        usleep(700000);
        exit(0);
    }

    }while(repeat);
    printf("================================================================\n");
    printf("THANK YOU AND HAVE A WONDERFUL DAY!\n");
    printf("================================================================\n");
    usleep(700000);
    system("cls");

    return 0;
}

bool pincheck (int a)
{
    int enterPIN;
    bool again;
    int count = 1;

    do{
    printf("================================================================\n");
    printf("Before you can proceed, you must enter your correct PIN\n");
    printf("================================================================\n");
    printf("Enter PIN: ");
    scanf("%d", &enterPIN);

    if (enterPIN == a)
    {
        again = false;
    }
    else if (enterPIN != a)
    {
        if (count == 3)
        {
            printf("\nYou have exceeded the number of available tries.\nThank you and have a wonderful day!\n");
            usleep(700000);
            exit(0);
        }
        else
        {
            printf("Wrong PIN, please try again\n");
            usleep(700000);
            system("cls");
            count++;
            again = true;
        }
    }
    }while(again);
}

void calcTime(char *str)
{
    time_t ts;
    ts = time(NULL);
    strcpy(str, ctime(&ts));
    str[strlen(str) - 1] = '\0';
    return;
}
