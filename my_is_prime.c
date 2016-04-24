/**
 *
 * Tells if the given number is prime
 */
int     my_is_prime(int nombre)
{
  int   div;
  int   tmp;
  if (nombre > 2147483647)
    {
      return (0);
    }
  div = 2;
  while (div < nombre)
    {
      tmp = nombre / div;

      if (div < nombre && tmp * div == nombre)
        {
          return (0);
        }
      div++;
    }
  if (div == nombre && tmp == 1)
    {
      return (1);
    }
}
