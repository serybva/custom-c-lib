/**
 *
 * Tells if the given number is prime
 */
int     my_is_prime_sup(int nb)
{
  int   div;
  int   tmp;
  int   check;

  check = my_is_prime(nb);
  if (check == 1)
    {
      return (nb);
    }
  div = nb;
  while (check != 1)
    {
      nb++;
      tmp = nb / div;
      check = my_is_prime(nb);
      if (check  == 1)
        {
          return (nb);
        }
      div++;
    }
}
