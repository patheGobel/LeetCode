#include <stdio.h>
#include <stdlib.h>
long long largestSquareArea(int **bottomLeft, int bottomLeftSize, int *bottomLeftColSize, int **topRight, int topRightSize, int *topRightColSize);
long long largestSquareArea(int **bottomLeft, int bottomLeftSize, int *bottomLeftColSize, int **topRight, int topRightSize, int *topRightColSize)
{
    int delta_x;
    for (int i = 0; i < (bottomLeftSize / (*bottomLeftColSize)); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", (topRight[i][j] < topRight[i + 1][j]) ? topRight[i][j] : topRight[i + 1][j]);
            printf("%d", (bottomLeft[i][j] > bottomLeft[i + 1][j]) ? bottomLeft[i][j] : bottomLeft[i + 1][j]);
            // delta_x = (topRight[i][j] > topRight[i+1][j]) ? topRight[i][j] : topRight[i+1][j]-(bottomLeft[i][j] > bottomLeft[i+1][j]) ? bottomLeft[i][j] : bottomLeft[i+1][j];
            if (delta_x < 0)
            {
                return 0;
                break;
            }
            else
            {
                0;
            }
        }
    }
}

int main()
{
    int bottomLeft[3][2] = {{1, 1}, {2, 2}, {3, 1}};

    // Taille totale du tableau (nombre d'éléments)
    int bottomLeftSize = sizeof(bottomLeft) / sizeof(bottomLeft[0][0]);

    // Nombre de colonnes
    int bottomLeftColSize = sizeof(bottomLeft[0]) / sizeof(bottomLeft[0][0]);

    int topRight[3][2] = {{3, 3}, {4, 4}, {6, 6}};

    // Taille totale du tableau (nombre d'éléments)
    int topRightSize = sizeof(topRight) / sizeof(topRight[0][0]);

    // Nombre de colonnes
    int topRightColSize = sizeof(topRight[0]) / sizeof(topRight[0][0]);
    /*
        printf("bottomLeftSize : %d\n", bottomLeftSize);
        printf("bottomLeftColSize : %d\n", bottomLeftColSize);
        printf("topRightSize : %d\n", topRightSize);
        printf("topRightColSize : %d\n", topRightColSize);
    */
    largestSquareArea(bottomLeft, bottomLeftSize, &bottomLeftColSize, topRight, topRightSize, &topRightColSize);
}