//Sorting array- Inserting & sorting algorithm - P8
//in this code I demonstrate the steps

#include <stdio.h>

void main(void)
{
    //array
    int xnumArr[] = {57,48,79,65,15,33,52};
    int sizeOfOrgArr = sizeof(xnumArr)/4;
    int key_val, arrVal, tmpVal;
    int smallest = 0;
    int coutner = 0;

    for(int i=1; i < sizeOfOrgArr; i++)
    {
        coutner +=1;
        key_val = xnumArr[i];
        printf("the key: %d\n", key_val);
        for (int j=i-1; j >=0; j--)
        {
            arrVal = xnumArr[j];

            if (key_val < arrVal)
            {
                smallest = key_val;
                tmpVal = xnumArr[j];
                xnumArr[j] = smallest;
                xnumArr[j+1] = tmpVal;
                key_val = xnumArr[j];
                printf("(%d, %d)\n",xnumArr[j], xnumArr[j+1]);
            }

            printf("%d, ", xnumArr[i]);
            printf("\n");
            coutner +=1;
        }
        printf("\n");
    }

    for(int k=0; k < sizeOfOrgArr; k++){printf("%d, ",xnumArr[k]);}
    printf("\n total steps are: %d", coutner);

}
