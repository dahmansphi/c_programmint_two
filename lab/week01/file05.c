// insert item to array P.14

#include <stdio.h>

void main(void)
{
    void sortFun(int sizeOfOrgArr, int xnumArr[], int startSort);
    //array
    int xnumArr[] = {57,48,79,65,15,33,52};
    int sizeOfOrgArr = sizeof(xnumArr)/4;

    printf("\n++++++++++++++++++++\n");
    printf("List BEFORE sorting: \n");
    for(int k=0; k < sizeOfOrgArr; k++){printf("%d, ",xnumArr[k]);}
    printf("\n++++++++++++++++++++\n");

    //sort the aray
    sortFun(sizeOfOrgArr, xnumArr, 1);
    //action sort done

    printf("\n++++++++++++++++++++\n");
    printf("\nList AFTER sorting: \n");
    for(int k=0; k < sizeOfOrgArr; k++){printf("%d, ",xnumArr[k]);}
    printf("\n++++++++++++++++++++\n");

    //*********************************************************************************************
    //insert new item
    int halfSizeInx = sizeOfOrgArr/2;
    int halfSizeVal = xnumArr[halfSizeInx];
    int newItem, arrVal, startInxSearch, endInxSearch, curntInxToInsert, tempValue;

    printf("\n Please enter a number: ");
    scanf("%d", &newItem);

    if (newItem < halfSizeVal)
    {
        //it means search from inx 0 to halfsizeVal
        startInxSearch = 0;
        endInxSearch = halfSizeInx;

    }
    else
    {
        //search from halfsizeval to end of arr
        startInxSearch = halfSizeInx;
        endInxSearch = sizeOfOrgArr;
    }

    for(int i=startInxSearch; i <= endInxSearch; i++)
        {
            arrVal = xnumArr[i];
            if (newItem <= arrVal)
            {
                curntInxToInsert = i;

                for(int k = sizeOfOrgArr-1;  k >= curntInxToInsert; k--)
                {
                    //tempValue = xnumArr[k];
                    xnumArr[k+1] = xnumArr[k];
                    //xnumArr[sizeOfOrgArr + 1] = xnumArr[sizeOfOrgArr];
                   // printf("%d, %d\n", xnumArr[k], xnumArr[k + 1]);
                }
                xnumArr[curntInxToInsert] = newItem;

                break;
            }
        }

    for(int k=0; k <= sizeOfOrgArr; k++){printf("%d, ",xnumArr[k]);}
}


void sortFun(int sizeOfOrgArr, int xnumArr[], int startSort)
{
    int key_val, arrVal, tmpVal;
    int smallest = 0;

    for(int i=startSort; i < sizeOfOrgArr; i++)
    {
        key_val = xnumArr[i];
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
            }
            else
            {
                break;
            }
        }
    }
}


