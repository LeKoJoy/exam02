#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//CODE DOES NOT WORK DO NOT TRY TO USE IT. IT GIVES ONLY AN IDEA HOW IT IS POSSIBLE. IT HAS BUG
int     *ft_range(int start, int end)
{
    int i = 0;
    int len = 0;
    if(start == end)
    {
        int *arr = (int*)malloc(1 * sizeof(int));
        arr[0] = start;
        return arr;
    }
    else if(start >= end)
    {
        i = end;
        len = start - end;
    }
    else
    {
        i = start;
        len = end - start;
    }
    int *arr = (int*)malloc(len * sizeof(int));
    int j = 0;
    while (j <= len && start > end)
    {
        arr[j] = i;
        j++;
        i--;
    }  
    while (j <= len && start < end)
    {
        arr[j] = i;
        j++;
        i--;
    }
    return arr;  
}

int main(void)
{
    int *arr = ft_range(5, 1);
    int i = 0;
    while(arr[i] != '\0')
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}