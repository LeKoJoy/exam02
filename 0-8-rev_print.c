#include <unistd.h>
/*
int main(int argc, char **argv)
{
	int	i;

	if (argc = 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i != 0)
		{
			write(1, argv[1][i], 1);
			i--;
		}
	}
	write(1, '\n', 1);
	return (0);
}*/

//There is a new version of exercise on EXAM. Be careful, i failed. I do not know the reason for that, but i tru to figure it out xD

char *rev_print(char *str)
{
    int i = 0;
    
    if (str == NULL)
        return str;
    if (*str == '\0')
    {
        write(1, "\n", 1);
        return str;
    }
    while(str[i] != '\0')
        i++;
    i--;
    while(i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, "\n", 1);
    return str;
}
/*
int main(void)
{
    char *str = "WTF IS A KOLIMETOR?";
	rev_print(str);
    write(1, "\n", 1);
    return 0;
}*/
