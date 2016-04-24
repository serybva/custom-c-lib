/*
** my_strndup.c for my_strdup in /u/epitech_2012/vray_s/cu/minishell1
**
** Made by Sébastien Vray

**
** Started on  Wed Feb 20 19:52:17 2008 Sébastien Vray
** Last update Wed Apr 30 23:38:35 2008 Sébastien Vray
*/
/*
* This function pastes str2 at the end of str1 and returns the result, it allocates the memory, 
* so there is no need to give it a pointer
* that have already been allocated.
*/
#include <stdlib.h>

char	*my_strdup(char *str1, char *str2)
{
  int	i;
  int	i2;
  char	*res;

  i = my_strlen(str1);
  i2 = my_strlen(str2);
  res = (char *)xcalloc(((i + 1) + (i2 + 1)) * sizeof(res));
  i = 0;
  i2 = 0;
  while (i < my_strlen(str1))
    {
      res[i] = str1[i];
      i++;
    }
  while (i2 < my_strlen(str2))
    {
      res[i] = str2[i2];
      i++;
      i2++;
    }
  res[i] = '\0';
  return (res);
}
