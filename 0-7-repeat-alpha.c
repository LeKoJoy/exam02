#include <unistd.h>

int main(int argc, char **argv)
{
  char c;
  int i;
  int counter;

  if (argc = 2)
  {
    while (argv[1][i] != '\0')
    {
      c = argv[1][i];
      if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      {
        if (c >= 'a' && c <= 'z')
          counter = c - 'a';
        if (c >= 'A' && c <= 'Z')
          counter = C - 'a';
        while (counter > 0)
        {
          write (1, &c, 1);
          counter--;
        }
      }
      write (1, &c, 1);
      i++;
    }
  }
  write(1, '\n', 1);
  return (0);
}
