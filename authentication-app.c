#include <stdio.h>
#include <string.h>
#include<windows.h>

int main()
{
    while (1)
    {
        int number_x = 0;
        int number_y = 0;
        char isQ;
        char FIXED_PASS[] = "Login123";
        char userPass[9];
        printf("Press 'q' to exit, press any button to continue.");
        scanf("%c",&isQ);
        scanf("%*[^\n]");
        if (isQ == 'q')
        {
            break;
        }
        printf("Authentication 1: Enter two numbers such that their product is greater than 100 and their sum is less than 50.\n");
        printf("Enter Number 1:");
        scanf("%d",&number_x);
        printf("Enter Number 2:");
        scanf("%d",&number_y);
        if (number_x*number_y > 100 && number_x+number_y < 50)
        {
            printf("Mathematical authentication is complete. Proceeding to password authentication.");
        }
        else
        {
            printf("Mathematical authentication failed. Returning to main menu");
            continue;
        }
        printf("Dogrulama 2: Sifreyi giriniz toplam 3 hakkiniz vardir.\n");
        for (int i = 0; i < 3; i++)
        {
            printf("Enter the password:");
            scanf("%s",userPass);
            //scanf("%*[^\n]");
            if (strcmp(FIXED_PASS,userPass) == 0)
            {
                printf("Login completed succesfully. Welcome to the system.");
                break;
            }
            else if (i < 2)
            {
                printf("Wrong password. Remaining trial: %d\n",2-i);         
            }
            else
            {
                printf("Password try right has expired. Closing the program.");
            }
        }
        Sleep(5000);
        break;
    }
    return 0;
}