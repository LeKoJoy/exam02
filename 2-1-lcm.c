#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int cm = 2;
    if(a == 0 || b == 0)
        return 0;
    while(cm <= a && cm <= b)
    {
        if(a % cm == 0 && b % cm == 0)
            return cm;
        else
            cm++;
    }
    return 0;
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		unsigned int m = lcm(atoi(av[1]), atoi(av[2]));
		printf("LCM: %u\n", m);
	}
}