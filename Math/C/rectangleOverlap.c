#include <stdio.h>
#include <stdbool.h>
bool isRectangleOverlap(int *rec1, int rec1Size, int *rec2, int rec2Size);

int main()
{
    int rec1[4] = {0, 0, 2, 2};
    int rec2[4] = {1, 1, 3, 3};
    printf("%d\n",isRectangleOverlap(rec1, 4, rec2, 4));
}

bool isRectangleOverlap(int *rec1, int rec1Size, int *rec2, int rec2Size)
{

    int borneInf_x = (rec1[0] > rec2[0]) ? rec1[0] : rec2[0];
    int borneSup_x = (rec1[2] < rec2[2]) ? rec1[2] : rec2[2];
    int delt_x = borneSup_x - borneInf_x;
    //printf("%d",delt_x);

    int borneInf_y = (rec1[1] > rec2[1]) ? rec1[1] : rec2[1];
    int borneSup_y = (rec1[3] < rec2[3]) ? rec1[3] : rec2[3];
    int delt_y = borneSup_y - borneInf_y;
    //printf("%d",delt_y);

    if (delt_x <= 0 || delt_y <= 0)
    {
        return false;
    }

    else
    {
        return true;
    }
}
