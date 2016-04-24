/*
** xcalloc.c for xcalloc in /u/epitech_2012/vray_s/cu/lib
**
** Made by Sébastien Vray

**
** Started on  Fri Feb 22 19:19:19 2008 Sébastien Vray
** Last update Thu May  1 00:48:04 2008 Sébastien Vray
*/
/*
**This function allocates memory and initialize it to zero
*/
#include <stdlib.h>

void	clear_zone(char *zone, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      zone[i] = 0;
      i++;
    }
}

void	*xcalloc(int n)
{
  void	*ptr;

  ptr = (void *)xmalloc(n);
  if (ptr == NULL)
    {
      print_err("Malloc couldn't allocate the required memory!\n");
      exit(1);
    }
  clear_zone(ptr, n);
  return (ptr);
}
