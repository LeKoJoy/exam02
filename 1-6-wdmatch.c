#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *c)
{
    int i = 0;
    while (c[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int len = ft_strlen(argv[1]);
    

    if (argc == 3)
    {
        while (argv[1][i] != '\0' && i < len)
        {
            if (argv[1][i] == argv[2][j])
            {
                i++;
                j++;
            }
        }
        if(i == len)
        {
           printf("%s", argv[1]);
        }
        else
        {
            write(1, "\n", 1);
            return 0;
        }
    }
    write(1, "\n", 1);
    return 0;
}