/*
** my_showstr.c for my_showstr in /u/epitech_2012/vray_s/cu/rendu/lib/my
** 
** Made by Sébastien Vray

** 
** Started on  Fri Feb 15 18:49:04 2008 Sébastien Vray
** Last update Fri Feb 15 18:50:09 2008 Sébastien Vray
*/
/*
**This functions prints on the stdout the hexadecimal value of each char of the given char string
*/
int     my_hex(int n)
{
  int   len;
  int   deb;
  int   end;
  char	*base;

  base = "0123456789abcdef";
  len  = my_strlen(base);
  if (n < 0)
    {
      n = n * -1;
      my_putchar('-');
    }
  end = n % len;
  deb = (n - end) / len;
  while (deb != 0)
    {
      my_putchar(deb + '0');
      deb /= len;
    }
  if (my_strlen(&deb) == 0)
    {
      my_putchar('0');
    }
  my_putchar(base[end]);
  return (0);
}

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < ' ') || (str[i] > '~'))
	{
	  my_putchar('\\');
	  my_hex(str[i]);
	}
      else
	{
      my_putchar(str[i]);
	}
      i++;
    }
  return (0);
}
