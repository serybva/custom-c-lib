/*
** my_strstr.c for my_strstr in /u/epitech_2012/vray_s/rendu/piscine/Jour_06
**
** Made by Sébastien Vray

**
** Started on  Sat Oct 13 17:44:04 2007 Sébastien Vray
** Last update Wed Feb 20 01:01:07 2008 Sébastien Vray
*/
/*
* This function tries to find a occurence of the to_find arg into 
* str and returns the address of the first matching char in str
*/
#include <string.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  if (to_find == NULL)
    return (str);
  i = 0;
  while (str[i] != '\0')
    {
      if ((my_strcmp(to_find, &str[i])) == 0)
	{
	  return (&str[i]);
	}
      i++;
    }
  return (NULL);
}
