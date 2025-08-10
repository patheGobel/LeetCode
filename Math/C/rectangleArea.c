// Online C compiler to run C program online
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2); 

#include <stdio.h>

int main() {
    int bx1,  by1,  bx2,  by2;
    printf("Donner les coordonnées:\n");
    scanf("%d %d %d %d",&bx1,  &by1,  &bx2,  &by2);
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, bx1, by1, bx2, by2) );
    return 0;
}

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
    int La, la, Lb, lb, Lc, lc;
    La = ax2 - ax1; 
    la = ay2 - ay1;
    Lb = bx2 - bx1;
    lb = by2 - by1;
    Lc = ax2 - bx1;
    lc = by2 - ay1;

    if ( La * la == 0 ){ return Lb*lb; }

    else if ( Lb * lb == 0 ){ return La * la; }
 
    else if (La * la == 0 && Lb * lb == 0 ){ return 0; }

    else if ( (bx1 > ax2) || (by1 > ay2) || (ax1 > bx2) || (ay1 > by2) ){ return (La * la) + (Lb * lb); }
    else if ( (ax1 < bx1 && ax2 > bx2) && (ay1 < by1 && ay2 > by2) ) { return (La * la); }

    else { return (La * la) + (Lb*lb) - (Lc*lc); }
}