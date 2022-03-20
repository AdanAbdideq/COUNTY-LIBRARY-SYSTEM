/* PROJECT: COUNTY LIBRARY MANAGMENT SYSTEM
AUTHER : ADAN ABDIDEQ HASSAN
Compiler:GNU GCC
License : MIT
*/
#include <stdio.h>
#include <stdlib.h>

struct Patron{
    char name[100];
    char email[50];
    char password[30];
    int is_staff;
};

void add_patron()
{
    struct Patron patron ;
    printf("Enter name: ");
    getchar();
    gets(patron.email);
    printf("Enter initial password: ");
    gets(patron.email);
    printf("Enter 1 if staff 0 otherwise");
    scanf("%d",&patron.is_staff);
    printf("$s added\n", patron.name);



}


int menu()
{
    int action;

    printf("\tCOUNTY LIBRARY MANAGMENT SYSTEM\n");
    printf("1.Add a new patron\n");
    printf("2.View patron\n");
    printf("3.View books\n");
    printf("4.Add a  new book\n");
    printf("your action:");
    scanf("%d",&action);

    if (action < 1 || action > 4){
        printf("Invalid action. Try again\n");

}
    void excute_action(int action);
    switch (action){


    case 1:
    add_patron();
    break;

    case 2:
    printf("List of all books\n");
    break;

    case 3:
    printf("List of books\n");
    break;

    case 4:
    printf("Add a new book\n");
    break;
}

    }

int main ()
{
    printf("COUNTY LIBRARY SYSTEM!\N");
    printf("WELOME MR. ADAN ABDIDEQ\n");
    menu();
    return 0;

}
