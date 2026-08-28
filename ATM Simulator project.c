/**I created a simple ATM program that checks the PIN, allows up to three attempts, processes withdrawals, checks the available balance, and blocks the account after three wrong PIN attempts.
**/

#include <stdio.h>
int main()
{
    int Balance = 2500;
    int pin;
    int wrong = 1;
    int withdraw;

    while (wrong <= 3)
    {
        printf("Give your pin - ");
        scanf("%d", &pin);

        if (pin == 1234)
        {
            printf("Pin is valid\n");
            printf("Withdraw Amount - \n");
            scanf("%d", &withdraw);
            if (withdraw <= Balance){
                Balance = Balance - withdraw;
                printf("Withdraw done\n");
                printf("Your remaining balance is: %d\n", Balance);
                }
                else {
                        printf("Insufficient balance\n");
                }
                break;
        }
        else
        {
            printf("Pin is invalid\n");

            if (wrong < 3)
            {
                printf("Try again\n");
            }
        }

        wrong++;
    }

    if (wrong > 3)
    {
        printf("Your account is blocked\n");
    }




    return 0;
}
