/*
** my_str_isupper.c for my_str_isupper
**
** Made by Sébastien Vray
**
** Started on  Fri Feb 15 19:04:52 2008 Sébastien Vray
** Last update Fri Feb 15 19:05:42 2008 Sébastien Vray
*/
/*
**This function returns 1 if all the chars of the given string are uppercase, returns 0 otherwise
*/
int    my_str_isupper(char *str)
{
  int   i;

  if (str == 0)
    {
      return (1);
    }
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'A') ||  (str[i] > 'Z'))
        {
          return (0);
        }
      i++;
    }
  return (1);
}
