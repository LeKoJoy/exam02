#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    unsigned int a = 2;
    if(n > 2)
    {
        while(a <= n)
        {
            if (a == n)
                return 1;
            a *= 2;
        }
    }
    return 0;
}

int main(void)
{
    printf("%d\n", is_power_of_2(40967));
    return 0;
}