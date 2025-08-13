class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        // Aire des deux rectangles
    int aireA = (ax2 - ax1) * (ay2 - ay1);
    int aireB = (bx2 - bx1) * (by2 - by1);

    // Calcul du recouvrement
    int dx = (ax2 < bx2 ? ax2 : bx2) - (ax1 > bx1 ? ax1 : bx1);
    int dy = (ay2 < by2 ? ay2 : by2) - (ay1 > by1 ? ay1 : by1);

    if (dx < 0) dx = 0;
    if (dy < 0) dy = 0;

    int aireRecouvrement = dx * dy;

    // Aire totale = somme - recouvrement
    return aireA + aireB - aireRecouvrement;
    }
};