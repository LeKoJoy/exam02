#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    int is_2 = 1;
    while (n > 2)
    {
        if (n % 2 != 0)
            is_2 = 0;
        n = n / 2;
    }
    if (is_2 == 1)
        return 1;
    else 
        return 0;
}

int main()
{
    printf("%d\n", is_power_of_2(65));
    return 0;
}