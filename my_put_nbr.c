/*
 * Print the given integer textual representation on the standard input
 */
int     my_put_nbr(int nb)
{
  int   nb_chars;
  int   tmp;

  nb_chars = 1;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  tmp = nb;
  while (tmp > 9)
    {
      tmp /= 10;
      nb_chars *= 10;
    }
  while (nb_chars != 0)
    {
      my_putchar(nb / nb_chars % 10 + '0');
      nb_chars /= 10;
    }
  return (0);
}
