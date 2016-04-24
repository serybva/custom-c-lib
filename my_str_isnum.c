/*
** my_str_isnum.c for my_str_isnum in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray

**
** Started on  Fri Feb 15 19:01:32 2008 Sébastien Vray
** Last update Fri Feb 15 19:02:21 2008 Sébastien Vray
*/
/*
**This function returns 1 is the given string is exclusively composed by numeric chars, returns 0 otherwise
*/
int    my_str_isnum(char *str)
{
  int   i;

  if (str == 0)
    {
      return (1);
    }
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < '0') ||  (str[i] > '9'))
        {
          return (0);
        }
      i++;
    }
  return (1);
}
