#include <unistd.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
    unsigned int i = 0;
    int res = 0;
    while(i <= len)
    {
        if (tab[i] > res)
            res = tab[i];
        i++;
    }
    return res;
}

int main(void)
{
    int arr[10] = {1, 15, 37, 4, 788, 7, 9, 122, -15, 777};

    printf("%d\n", max(arr, 8));
    return 0;
}