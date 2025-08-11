// Online C compiler to run C program online
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2);
int max(int a, int b);

#include <stdio.h>

int main()
{
    // int bx1, by1, bx2, by2;
    // printf("Donner les coordonnées:\n");
    // scanf("%d %d %d %d", &bx1, &by1, &bx2, &by2);
    // Top right
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, 1, 1, 3, 3)); // A=19
    // top left
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, -3, 1, -1, 3)); // A=19
    // bottom right
    printf("Aire Totale = %d\n", computeArea(-3, 0, 3, 4, 0, -1, 9, 2));   // A=45
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, 1, -3, 3, -1)); // A=19
    // Confondu
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, -2, -2, 2, 2)); // A=16
    // bottom left
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, -3, -3, -1, -1)); // A=16
    // podium
    // bottom
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, -3, -3, 3, -1)); // A=24
    // left
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, 1, -3, 3, 3)); // A=24
    // top
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, -3, 1, 3, 3)); // A=24
    // right
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, -3, -3, -1, 3)); // A=24
    return 0;
}

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
{
    // Aire des deux rectangles
    int aireA = (ax2 - ax1) * (ay2 - ay1);
    int aireB = (bx2 - bx1) * (by2 - by1);

    int debut_x = max_func(ax1, bx1);
    int fin_x = min_func(ax2, bx2);

    int delta_x = fin_x - debut_x;

    int debut_y = max_func(ay1, by1);
    int fin_y = min_func(ay2, by2);

    int delta_y = fin_y - debut_y;

    // les rectangles se chevauchent en largeur (il y a un intervalle commun en x)
    if (delta_x < 0)
    {
        delta_x = 0;
    }
    // aucun recouvrement horizontal (un rectangle est complètement à gauche de l’autre)
    if (delta_y < 0)
    {
        delta_y = 0;
    }

    int aireRecouvrement = delta_x * delta_y;

    // Aire totale = somme - recouvrement
    return aireA + aireB - aireRecouvrement;
}

int min_func(int a, int b)
{
    return (a < b) ? a : b;
}

int max_func(int a, int b)
{
    return (a > b) ? a : b;
}
