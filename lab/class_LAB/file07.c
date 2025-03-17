#include <stdio.h>
int binSearchFun(int key, int list[], int lo, int hi);

int main()
{
    int list[] = {17,24,31,39,44,49,56,66,72,78,83,89,96};

    int lo = 0;
    int hi = sizeof(list)/4;
    int key;

    printf("Enter number you search for: ");
    scanf("%d", &key);

    int ans = binSearchFun(key, list, lo, hi);
    if (ans == -1) printf("Number %d you search is not found\n", key);
    else printf("%d found in location %d\n", key, ans);



}

int binSearchFun(int key, int list[], int lo, int hi)
{
    while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (key == list[mid]) return mid; // found
            if (key < list[mid]) hi = mid - 1;
            else lo = mid + 1;
        }
        return -1;
}
