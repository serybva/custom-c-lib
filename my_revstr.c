/*
** my_revstr.c for my_revstr in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray

**
** Started on  Fri Feb 15 18:45:33 2008 Sébastien Vray
** Last update Fri Feb 15 18:46:49 2008 Sébastien Vray
*/
/*
**This function takes a string and reverses it
*/
char    *my_revstr(char *str)
{
  int   i;
  int   lenght;

  lenght = my_strlen(str) - 1;
  i = 0;
  while (i < (lenght / 2))
    {
      str[i] = str[lenght - i];
      i++;
    }
  return (str);
}
