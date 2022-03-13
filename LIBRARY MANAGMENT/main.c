#include <stdio.h>
#include <stdlib.h>

int main (menu)
{

    int action = 0;
    char name[100];

    printf("Welcome Mr. Adan\n");
    printf("What would like to do?\n");
    printf("1. View users\n");
    printf("2. Add new user\n");
    printf("3. Edit user\n");
    printf("4. Delete user\n");
    printf("5. Change password\n");
    printf("6. Log out\n");
    printf("7. Exit system\n");
    printf("Select your action:");

    scanf("%d", &action);

    if (action <= 1 || action > 7)
        printf("Invalid error. Try again");


    switch (action)
    {
        case 1:
        printf("View user");
        break;

        case 2:
        printf("Edit user");
        break;

        case 3:
        printf("Edit user");
        break;

        case 4:
        printf("Delete user");
        break;

        case 5:
        printf("Change password");
        break;

        case 6:
        printf("Logout");
        break;

        case 7:
        printf("Exit system");
        break;

    }


    return 0;

}
