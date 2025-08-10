// Online C compiler to run C program online
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2);

#include <stdio.h>

int main()
{
    //int bx1, by1, bx2, by2;
    //printf("Donner les coordonnées:\n");
    //scanf("%d %d %d %d", &bx1, &by1, &bx2, &by2);
    printf("Aire Totale = %d\n", computeArea(-2, -2, 2, 2, -2, -2, 2, 2));
    return 0;
}

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
{
    int La, la, Lb, lb, Lc, lc;
    La = ax2 - ax1;
    la = ay2 - ay1;
    Lb = bx2 - bx1;
    lb = by2 - by1;

    if (La * la == 0)
    {
        return Lb * lb;
    }

    else if (Lb * lb == 0)
    {
        return La * la;
    }

    else if (La * la == 0 && Lb * lb == 0)
    {
        return 0;
    }
    // les deux sont confondue
    else if ((ax1 == bx1 && ay1 == by1) && (ax2 == bx2 && ay2 == by2))
    {
        return (La * la);
    }
    
    // les deux carrées se touche pas
    else if ((bx1 > ax2) || (by1 > ay2) || (ax1 > bx2) || (ay1 > by2) || (bx1 > ax2 && by1 > ay2))
    {
        return (La * la) + (Lb * lb);
    }
    
    else if ((ax1 < bx1 && ax2 > bx2) && (ay1 < by1 && ay2 > by2))
    {
        return (La * la);
    }
    // les deux carrées se touche en un point extérieurement
    else if ((ax1 == bx2 && ay2 == by1) || (ax2 == bx1 && ay2 == by1) || (ay1 == by2 && ax2 == bx1))
    {
        return (La * la) + (Lb * lb);
    }
    // les deux carrées partage le meme coté
    else if ((bx1 == ax1 && by1 == ay2 && bx2 == ax2 && by2 > ay2) || (bx1 == ax2 && by1 == ay1 && by2 == ay2 && bx2 > ax2) || (bx2 == ax2 && by2 == ay1 && bx1 == ax1 && by1 < ay1) || (bx2 == ax1 && by2 == ay2 && by1 == ay1 && bx1 < ax1))
    {
        return (La * la) + (Lb * lb);
    }
    // les deux forment une chaines
    else if ( (ax1 < bx1 < ax2) && (ay1 < by1 < ay2) && ay2 > by2)
    {
        return ( (La * la) + (Lb * lb) - (ax2 - bx1)*(by2 - ay1) );
    }
    else if ( (ax1 < bx1 < ax2) && (by1 < ay1 < by2) && (by2 > ay2) )
    {
       return ( (La * la) + (Lb * lb) - (ax2 - bx1)*(ay2 - by1) );
    }
    else
    {
        return 0;
    }
}