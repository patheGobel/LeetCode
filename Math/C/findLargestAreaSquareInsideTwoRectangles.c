#include <stdio.h>
#include <stdlib.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

// Prototype de la fonction
long long largestSquareArea(int **bottomLeft, int bottomLeftSize, int *bottomLeftColSize, int **topRight, int topRightSize, int *topRightColSize);

long long largestSquareArea(int **bottomLeft, int bottomLeftSize, int *bottomLeftColSize, int **topRight, int topRightSize, int *topRightColSize) {
    long long max_square_area = 0; // Variable pour stocker la plus grande aire

    // Utilisation de bottomLeftSize pour la boucle, rendant le code générique
    for (int i = 0; i < bottomLeftSize; i++) {
        for (int j = i + 1; j < bottomLeftSize; j++) {
            // Calcul du chevauchement horizontal (dx)
            int dx = min(topRight[i][0], topRight[j][0]) - max(bottomLeft[i][0], bottomLeft[j][0]);

            // Calcul du chevauchement vertical (dy)
            int dy = min(topRight[i][1], topRight[j][1]) - max(bottomLeft[i][1], bottomLeft[j][1]);
            
            // Vérifier s'il y a un chevauchement
            if (dx > 0 && dy > 0) {
                // Trouver le côté du carré de chevauchement (le plus petit côté du rectangle de chevauchement)
                int overlap_side = min(dx, dy);

                // Calculer l'aire du carré de chevauchement
                long long current_area = (long long)overlap_side * overlap_side;

                // Mettre à jour la plus grande aire trouvée
                if (current_area > max_square_area) {
                    max_square_area = current_area;
                }
            }
        }
    }
    
    return max_square_area;
}