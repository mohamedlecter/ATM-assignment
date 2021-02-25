#include <stdio.h>

int balance = 2000; // glbal variables
int anotherTransaction = 1;
int transaction, i;

int userChoise()
{
    if (transaction == 1) // if the user wants to chech the balance
    {
        printf("your balance is: %d \n", balance);
    }
    else if (transaction == 2) // if the user wants to widraw money
    {
        int withdrawalAmount;
        printf("How much money do you want to withdraw: ");
        scanf("%d", &withdrawalAmount);
        if (withdrawalAmount <= balance)
        {
            balance -= withdrawalAmount; // subtracts the balance form the withdrawl money
            printf("your balance now is: %d \n", balance);
        }
        else
        {
            printf("you dont have enough money, please try again\n ");
        }
    }
    else if (transaction == 3)
    {
        int depositAmount;
        printf("How much money do you want to deposit: ");
        scanf("%d", &depositAmount);
        if (depositAmount > 0)
        {
            balance += depositAmount; // adds the deposited money to the balance
            printf("your balance now is: %d \n", balance);
        }
        else
        {
            printf("Please enter a postive number\n");
        }
    }
    else if (transaction == 4)
    {
        return 0;
    }
    else
    {
        printf("\nInvalid transaction, please enter a number from 1 to 4\n");
    }
    return transaction;
}

int main()
{
    char *menu[] = {"1- Balance checking", "2- Cash withdrawal", "3- Cash deposition", "4- Quit"};
    do
    {
        printf("**************** ATM MENU **************\n");
        for (i = 0; i < 4; i++)
        {
            printf("%s \n", menu[i]);
        }

        printf("Please enter your transaction: ");
        scanf("%d", &transaction);
        userChoise(); // calling the function
        printf("do you want to do another transaction: \n");
        printf(" 1- yes \n 2- no\n");
        scanf("%d", &anotherTransaction);
    } while (anotherTransaction == 1);
}
