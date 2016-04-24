/*
** my_square_root.c for my_square_root in /u/epitech_2012/vray_s/cu/rendu/lib/my
** 
** Made by Sébastien Vray

** 
** Started on  Fri Feb 15 18:53:52 2008 Sébastien Vray
** Last update Fri Feb 15 18:55:18 2008 Sébastien Vray
*/
/*
**This function returns the square root of the given number, if this root is not an integer it returns 0
*/
int     my_square_root(int nb)
{
  int   square;
  int   tmp;

  if (nb > 2147483647 || nb < 0)
    {
      return (0);
    }
  square = 1;
  while (tmp < nb)
    {
      tmp = square * square;
      square++;
    }
  if (tmp != nb)
    {
      return (0);
    }
  return (square - 1);
}
