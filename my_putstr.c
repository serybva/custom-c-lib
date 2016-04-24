/*
** my_putstr.c for my_putstr in /u/epitech_2012/vray_s/cu/rendu/lib/my
** 
** Made by Sébastien Vray

** 
** Started on  Fri Feb 15 18:41:12 2008 Sébastien Vray
** Last update Fri Feb 15 18:41:55 2008 Sébastien Vray
*/
/*
**This function prints on stdout the given char string
*/
int     my_putstr(char *str)
{
  write(1, str, (my_strlen(str)));
  return (0);
}
