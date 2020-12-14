#include <stdio.h>          
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int A;
    int B = rand();
    printf("Entrez un nombre entiers :");
    scanf_s("%i", &A);
    while (A!=B)
    {
        scanf_s("%i", &A);
        if (A > B)
            printf("Trop grand \n");
        else if (A < B)
            printf("Trop petit \n");
        else
            printf("Bravooo \n");
    }
   
    return EXIT_SUCCESS;
}