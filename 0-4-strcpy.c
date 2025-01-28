#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
  int  i;
  int  j;

  i = 0;
  j = 0;
  while (s1[i] != '\0')
    {
      s1[i] = s2[j];
      i++;
      j++;
    }
  s2[j] = '\0';
  return (*s2); 
}
