/*
** my_str_islower.c for my_str_islower in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray

**
** Started on  Fri Feb 15 18:58:26 2008 Sébastien Vray
** Last update Fri Feb 15 19:01:11 2008 Sébastien Vray
*/
/*
**This function returns 1 if all the chars of the given string are lowercase returns 0 otherwise
*/
int    my_str_islower(char *str)
{
  int   i;

  if (str == 0)
    {
      return (1);
    }
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'a') ||  (str[i] > 'z'))
        {
          return (0);
        }
      i++;
    }
  return (1);
}
