int     my_getnbr(char *str)
{
  int   i;
  int   nbr;
  int   mult;

  i = my_strlen(str) - 1;
  mult = 1;
  nbr = 0;
  while (i >= 0)
    {
      nbr += (mult * (str[i] - '0'));
      mult *= 10;
      i--;
    }
  return (nbr);
}
