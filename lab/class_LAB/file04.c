#include <stdio.h>
#define MaxNumbers 10

// this is the code from book for the Sorting an Array: Insertion Sort P. 8


int counter = 0;


        int main() {
           void insertionSort(int [], int);
           int num[MaxNumbers];

           printf("Type up to %d numbers followed by 0\n", MaxNumbers);
           int n = 0, v;
           scanf("%d", &v);

           while (v != 0 && n < MaxNumbers) {
              num[n++] = v;
              scanf("%d", &v);
           }

           if (v != 0) {
              printf("More than %d numbers entered\n", MaxNumbers);
              printf("First %d used\n", MaxNumbers);
           }
           //n numbers are stored from num[0] to num[n-1]
           insertionSort(num, n);
           printf("\nThe sorted numbers are\n");
           for (int h = 0; h < n; h++) printf("%d ", num[h]);
           printf("\n");
           printf("\n total steps: %d", counter);
        }

         void insertionSort(int list[], int n) {
        //sort list[0] to list[n-1] in ascending order
           for (int h = 1; h < n; h++) {
              int key = list[h];
              int k = h - 1; //start comparing with previous item

              while (k >= 0 && key < list[k])
                {
                 list[k + 1] = list[k];
                 --k;
                 counter +=1;
                }
              list[k + 1] = key;
              counter +=1;
           } //end for
        } //end insertio
