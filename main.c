#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userChoice = 0;
    //INTERFACE
    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");
    printf("Votre choix ?\n");
    //INPUT
    scanf("%d", &userChoice);
    switch(userChoice)
    {
    case 1:
        printf("Vous avez choisi menu le Royal Cheese");
        break;
    case 2:
        printf("Vous avez choisi le menu Mc Deluxe");
        break;
    case 3:
        printf("Vous avez choisi le menu Mc Bacon");
        break;
    case 4:
        printf("Vous avez choisi le menu Big Mac");
        break;
    default:
        printf("Le menu numero %d est invalide...", userChoice);
        break;
    }
    return 0;
}
