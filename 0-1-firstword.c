#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(int argc, char **argv)
{
  int    i;
  char   c;
  if (argc = 2)
  {
      while (argv[1][i] = 32 || argv[1][i] = '\t')
          i++;
      while (argv[1][i] != 32 || argv[1][i] != '\t' )
      {
          ft_putchar(argv[1][i]);
          i++;
      }
  }
  else
      write(1, '\n', 1);
  return (0);
}
