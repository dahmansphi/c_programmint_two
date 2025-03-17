//Sorting array- selection & sorting algorithm - P4

#include <stdio.h>
int count = 0;


void main()
{
   //array
    int xnumArr[] = {57,48,79,65,15,33,52};
    int outVal, inVal, inxSmall, tmpHold;
    inxSmall = 1;
    // the algorithm

    for (int i=0; i < sizeof(xnumArr)/4; i++)
    {
        outVal = xnumArr[i];
        for(int j=i+1; (sizeof(xnumArr)/4)-j; j++)
        {
            inVal = xnumArr[j];

            if (inVal < outVal)
            {
                inxSmall = j;
                outVal = xnumArr[inxSmall];
            }
            count += 1;
        }
        tmpHold = xnumArr[i];
        xnumArr[i] = xnumArr[inxSmall];
        xnumArr[inxSmall] = tmpHold;

        printf("%d, ",xnumArr[i]);
        count += 1;
    }
    printf("\n count: %d", count);


}
