/*
** my_nbrlen.c for my_nbrlen
**
** Made by Sébastien Vray
**
** Started on  Fri Feb 15 18:30:47 2008 Sébastien Vray
** Last update Fri Feb 15 19:37:00 2008 Sébastien Vray
*/
/*
**This function returns the lenght of a given number
*/
int     my_nbrlen(int nb)
{
  int   i;

  i = 1;
  while (nb > 9)
    {
      nb /= 10;
      i++;
    }
  return (i);
}
