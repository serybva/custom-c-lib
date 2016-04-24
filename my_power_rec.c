/*
 * Puts given the number to the given power
 */
int     my_power_rec(int nb, int power)
{
  int nb_deb;

  nb_deb = nb;
  if (power == 0)
    {
      return (1);
    }
  if (power < 0)
    {
      return (0);
    }
  if (power > 1)
    {
      return (nb_deb * my_power_rec(nb, power - 1));
    }
  return (nb);
}
