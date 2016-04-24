/*
** my_showmem.c for my_showmem in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray
**
** Started on  Fri Feb 15 18:47:29 2008 Sébastien Vray
** Last update Fri Feb 15 18:48:14 2008 Sébastien Vray
*/
/**
 * Prints the memory address of each char in the given string
 */
void	my_put_nbr_base_pad(unsigned int nbr, char *base, int pad)
{
  int	base_len;

  base_len = my_strlen(base);
  if (pad > 0)
    {
      my_put_nbr_base_pad(nbr / base_len , base, pad - 1);
      my_putchar(base[nbr % base_len]);
    }
}

void	print_addr(char *str)
{
  my_put_nbr_base_pad((unsigned int) str, "0123456789abcdef", 8);
  my_putchar(':');
}

void	print_hexa(char *str, int size)
{
  int	i;

  i = 0;
  while (i < 16)
    {
      if ((i % 2) == 0)
	{
	  my_putchar(' ');
	}
      if (i < size)
	{
	  my_put_nbr_base_pad((unsigned int)str[i], "0123456789abcdef", 2);
	}
      else
        {
          my_putstr("  ");
        }
      i++;
   }
}

void	print_ascii(char *str, int size)
{
  int	i;

  i = 0;
  my_putstr("  ");
  while ((i < 16) && (i < size))
    {
      if ((str[i]) >= ' ' && (str[i]) <= '~')
	{
	  my_putchar(str[i]);
	}
      else
	{
	  my_putchar('.');
	}
      i++;
    }
}

void	showmem16(char *str, int size)
{
      print_addr(str);
      print_hexa(str, size);
      print_ascii(str, size);
      my_putchar('\n');
}

int	my_showmem(char *str, int size)
{
  int   i;

  i = 0;
  while (i < size)
    {
      showmem16(&str[i], size);
      i += 16;
    }
  return (0);
}
