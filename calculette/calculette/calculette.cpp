
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    printf("Calculatrice dediee aux calculs de base");
    int resultat = 0, nombre1 = 0, nombre2 = 0;

    printf("\n\n Entrez le calcul que vous souhaitez faire: ");
    scanf_s("%d", & nombre1);
    scanf_s("%d", & nombre2);

    if (nombre1 + nombre2)
    {
        printf("\n\nVoici le resultat : %d ", nombre1 + nombre2);
    }
    else if (nombre1 - nombre2)
    {
        printf("\n\nVoici le resultat : %d ", nombre1 - nombre2);
    }
    else if (nombre1 * nombre2)
    {
        printf("\n\nVoici le resultat : %d", nombre1 * nombre2);
    }
    return 0;
}