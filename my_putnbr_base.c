/*
** my_putnbr_base.c for my_put_nbr_base in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray
**
** Started on  Fri Feb 15 18:40:08 2008 Sébastien Vray
** Last update Fri Feb 15 18:42:02 2008 Sébastien Vray
*/
/*
**This function prints on stdout the given number in the given base
*/
void    my_putnbr_base(int n, char *base)
{
  int   deb;
  int   fin;
  int   len;

  len = my_strlen(base);
  if (n < 0)
    {
      my_putchar('-');
      my_putnbr_base(n,base);
    }
  else
    {
      fin = n % len;
      deb = (n - fin) / len;
      if (deb != 0)
	{
	  my_putnbr_base(deb, base);
	}
      my_putchar(base[fin]);

    }
}
