/*
** my_str_isprintable.c for my_str_isprintable in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray

**
** Started on  Fri Feb 15 19:03:16 2008 Sébastien Vray
** Last update Fri Feb 15 19:04:16 2008 Sébastien Vray
*/
/*
**This function return 1 if all the chars in the given string are printable on the stdout, returns 0 otherwise
*/
int    my_str_isprintable(char *str)
{
  int   i;

  if (str == 0)
    {
      return (1);
    }
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < ' ') ||  (str[i] > '~'))
        {
          return (0);
        }
      i++;
    }
  return (1);
}
