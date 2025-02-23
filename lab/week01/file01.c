#include <stdio.h>
void presentArray(void);


void main(void)
{
    //presentation of Array
    presentArray();

}

void presentArray(void)
{
    int nums[9] = {4,6,3,1,6,3,2,7,1};

    //find the value of each item
    for (int i=0; i < sizeof(nums)/sizeof(int); i++)
    {
        printf("Item-%d: %d\n", i,nums[i]);
    }
    //find the address of each item
    for (int i=0; i < sizeof(nums)/sizeof(int); i++)
    {
        printf("Item-%d address: %d\n", i,&nums[i]);
    }

}


