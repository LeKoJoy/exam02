#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int table[256] = {0};
    if(argc == 3)
    {
        int i = 0;
        while(argv[1][i] != '\0')
        {
            table[(int)argv[1][i]] = 1;
            i++;
        }
        i = 0;
        while(argv[2][i] != '\0')
        {
            table[(int)argv[2][i]] = 1;
            i++;
        }
        i = 0;
        while(argv[1][i] != '\0')
        {
            if(table[(int)argv[1][i]] == 1)
            {
                write(1, &argv[1][i], 1);
                table[(int)argv[1][i]] = 0;
            }
            i++;
        }
        i = 0;
        while(argv[2][i] != '\0')
        {
            if(table[(int)argv[2][i]] == 1)
            {
                write(1, &argv[2][i], 1);
                table[(int)argv[2][i]] = 0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}